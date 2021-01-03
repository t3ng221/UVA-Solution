#include<stdio.h>
int main()
{
    long long int a,b,s;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        if(a>b)
        {
            s=a-b;
        }
        else
        {
            s=b-a;
        }

        printf("%lld\n",s);
    }
    return 0;
}
