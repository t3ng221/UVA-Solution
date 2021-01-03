#include<stdio.h>
int main()
{
    long long int a;
    while(scanf("%lld",&a)!=EOF)
    {
        if(a==0)
        {
            break;
        }
        else if(a%11==0)
        {
            printf("%lld is multiple of 11\n",a);
        }
        else
        {
            printf("%lld is not a multiple of 11\n",a);
        }
    }
    return 0;
}
