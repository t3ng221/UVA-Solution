#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,i,sum=1;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d %d %d %d %d",&b,&c,&d,&e,&f);
        if(sum+b==c && sum+c==d && sum+d==e &&sum+e==f)
        {
                 printf("Y\n");
        }
       else
        {
            printf("N\n");
        }
    }
    return 0;
}
