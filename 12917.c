#include<stdio.h>
int main()
{
    int a,b,c,M;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF)
    {
        M=c-a;
        if(b>M)
        {
            printf("Hunters win!\n");
        }
        else
        {
            printf("Props win!\n");
        }
    }
    return 0;
}
