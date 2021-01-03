#include<stdio.h>
int main()
{
    int a,b,i,c,m,n;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d %d",&b,&c);
        m=b/3;
        n=c/3;
        printf("%d\n",m*n);
    }
    return 0;
}
