#include<stdio.h>
int main()
{
    int a,b,c,d,sum=0,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
     scanf("%d %d %d",&b,&c,&d);
     sum=b+c;
     if(sum>d)
     {
         printf("OK\n");
     }
     else
     {
         printf("Wrong!!\n");
     }
    }
    return 0;
}
