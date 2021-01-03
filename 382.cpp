#include <bits/stdc++.h>
#include <string.h>

using namespace std;
int main()
{
    int n,a,i,s=0,p=0,c=0,b,k=0,u=0;

    while(scanf("%d",&n)!=EOF)
    {
        c=0;
        s=0;
        while(k==0)
        {
            printf("PERFECTION OUTPUT\n");
            k=1;
        }
        if(n==0)
        {
            printf("END OF OUTPUT\n");
            break;
        }
        else
        {
            for(i=1; i<=(n/2); i++)
            {
                if(n%i==0)
                {
                    s+=i;
                }
            }
        }
        u=n;
        while(u!=0)
            {
                u=u/10;
                c++;
            }
            if(c==1)
            {
                printf("    ");
            }
            else if(c==2)
            {
                printf("   ");
            }
            else if(c==3)
            {
                printf("  ");
            }
            else if(c==4)
            {
                printf(" ");
            }
            if(s<n)
            {
                printf("%d  DEFICIENT\n",n);
            }
            else if(s>n)
            {
                printf("%d  ABUNDANT\n",n);
            }
            else if(s==n)
            {
                printf("%d  PERFECT\n",n);
            }
    }
    return 0;
}
