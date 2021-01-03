#include<stdio.h>
int main()
{
    int m,a,nou,i;
    while(scanf("%d",&m)!=EOF)
    {
        nou=0;
        for(i=0;i<=4;i++)
        {
            scanf("%d",&a);
            if(m==a)
        {
            nou++;
        }
        }

         printf("%d\n",nou);
    }
    return 0;

}
