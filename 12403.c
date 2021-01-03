#include<stdio.h>
int main()
{
    int a,i,n,p=0;
    char ch[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

        scanf("%s",&ch);
    if(ch[0]=='d')
    {
        scanf("%d",&a);
        p+=a;
    }
     else if(ch[0]=='r')
    {
        printf("%d\n",p);
    }
    }
    return 0;
}
