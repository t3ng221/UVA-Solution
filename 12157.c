#include<stdio.h>
int main()
{
    int a=0,b=0,c,n,m,i=0,j;
    scanf("%d",&m);
    while(m!=0)
    {
        m--;
        scanf("%d",&n);
        b=0;a=0;
       while(n!=0)
        {
            n--;
            scanf("%d",&c);

            b+=(((c/30)+1)*10);

            a+=(((c/60)+1)*15);
        }
        i++;
            if(b<a)
        {
            printf("Case %d: Mile %d\n",i,b);
        }
        else if(b>a)
        {
            printf("Case %d: Juice %d\n",i,a);
        }
        else if(b==a)
        {
            printf("Case %d: Mile Juice %d\n",i,a);
        }
        }

    }

