#include<stdio.h>
int main()
{
    int a,b,c,m,n,o;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF)
    {
        if(a==0 && b==0 &&c==0)
        {
            break;
        }
        m=a*a;
        n=b*b;
        o=c*c;
        if(m>n && m>o)
        {
            if(m==(n+o))
            {
                printf("right\n");
            }
            else
            {
                printf("wrong\n");
            }
        }
        else if(n>m && n>o)
        {
            if(n==(m+o))
            {
                printf("right\n");
            }
            else
            {
                printf("wrong\n");
            }
        }
        else if(o>m && o>n)
        {
            if(o==(n+m))
            {
                printf("right\n");
            }
            else
            {
                printf("wrong\n");
            }
        }
    }
    return 0;
}
