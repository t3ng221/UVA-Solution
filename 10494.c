#include<stdio.h>
int main()
{
    int a,b,ans;
    char c;
    scanf("%d %c %d",&a,&c,&b);
    if(c=='/')
    {
        ans=a/b;
        printf("%d",ans);
    }
    else if(c=='%')
    {
        ans=a%b;
        printf("%d",ans);
    }
}
