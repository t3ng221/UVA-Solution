#include<stdio.h>
int main()
{
    int n,i,sum=1;
    while(scanf("%d",&n)!=EOF)
    {
        sum+=n;
         printf("%d\n",sum);
         sum+=1;
         sum-1;
    }


}
