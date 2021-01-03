#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,n,count,i,tmp;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(a==0 && b==0)
            break;
            count=0;
        if(a>b)
        {
            tmp=a;
            a=b;
            b=tmp;
        }
            for(i=a;i<=b;i++)
            {
                n=sqrt(i);
                if((n*n)==i)
                {
                    count++;
                }
            }
        printf("%d\n",count);
    }
    return 0;
}
