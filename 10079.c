#include<stdio.h>
int main()
{
    long long int a,b;
    while(scanf("%lld",&a)!=EOF)
    {
        if(a<0)
        {
            break;
        }
        else
        {
            b=((a*(a+1))/2)+1;
            printf("%lld\n",b);
        }
    }
    return 0;
}
