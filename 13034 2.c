#include<stdio.h>
int main()
{
    int a,b[100],c,i,j;
    scanf("%d",&a);
    for(i=1; i<=a; i++)
    {
        c=0;
        for(j=1; j<=13; j++)
        {
            scanf("%d",&b[j]);
        if(b[j]==0)
        {
            c++;
        }
        }
    if(c!=0)
    {
        printf("Set #%d: No\n",i);
    }
    else
    {
        printf("Set #%d: Yes\n",i);
    }
    }
    return 0;
}
