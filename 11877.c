#include<stdio.h>
int main()
{
    int a,ans;
    while(scanf("%d",&a)!=EOF)
    {
        if(a==0)
        {
            break;
        }
        else
        {
            ans=a/2;
            printf("%d\n",ans);
        }
    }
    return 0;
}
