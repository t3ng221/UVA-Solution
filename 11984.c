#include<stdio.h>
int main()
{
    int a,b,t,i;
    float m,n;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&a,&b);
        n=(b/1.8);
        m=a+n;
        printf("Case %d: %.2f\n",i,m);

    }
    return 0;
}
