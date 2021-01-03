#include<stdio.h>
int main()
{
    int a,b,s,sum=0;
    scanf("%d",&a);
    s=a;
    while(a!=0)

    {
        sum=(a%10)+(sum*10);
        a=a/10;
    }
    printf("%d",sum+s);
    return 0;
}
