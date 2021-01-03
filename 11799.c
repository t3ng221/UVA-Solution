#include<stdio.h>
int main()
{
    int a,b,i,j,c[1000],d=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%d",&b);
        for(j=0;j<b;j++)
        {
            scanf("%d",&c[j]);
        }
        for(j=0;j<b;j++)
        {
            if(c[j]>d)
            {
                d=c[j];
            }
        }
        printf("Case %d: %d\n",i,d);
        d=0;
    }
    return 0;
}
