#include<stdio.h>
int main()
{
    int a,i,c,m,j;
    scanf("%d",&m);
    for(i=1; i<=m; i++)
    {
        c=0;
        for(j=0; j<13; j++)
        {
            scanf("%d",&a);

            if(a==0)
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

