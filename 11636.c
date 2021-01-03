#include<stdio.h>
int main()
{
    int a,b=0,m,c,d=0,i=1,j,sum=0;
    while(scanf("%d",&a)!=EOF)
    {
        b++;
        if(a<0)
        {
            break;
        }
        i=1;
            while(i<a)
            {
                d++;
                i=i*2;

            }
        printf("Case %d: %d\n",b,d);
        d=0;
    }

    return 0;
}
