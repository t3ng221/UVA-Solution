#include<stdio.h>
int main()
{
    int i=0;
    char ch[1000];
    while(scanf("%s",&ch)!=EOF)
    {
        i++;
        if(ch[0]=='*')
        {
            break;
        }
        if(ch[0]=='H' && ch[1]=='a' && ch[2]=='j' && ch[3]=='j')
        {
            printf("Case %d: Hajj-e-Akbar\n",i);
        }
        else if(ch[0]=='U' && ch[1]=='m'&& ch[2]=='r' && ch[3]=='a' && ch[4]=='h')
        {
            printf("Case %d: Hajj-e-Asghar\n",i);
        }
    }
    return 0;
}
