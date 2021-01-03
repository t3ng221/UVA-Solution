#include<stdio.h>
int main()
{
    long long int a,b,c,d,i,rem,s;
    while(scanf("%lld",&a)!=EOF)
    {
        if(a==0)
        {
            break;
        }
        while(a/10!=0)
        {
            s=0;
            while(a!=0)
            {
                rem = a % 10;
                s=s+rem;
                a=a/10;
                  rem=0;
            }
            a=s;
        }
        if(a>10)
        {
             printf("%lld\n",s);
        }
        else
        {
            printf("%lld\n",a);
        }

    }
    return 0;
}
