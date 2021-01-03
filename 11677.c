#include<stdio.h>
int main ()
{
    int h1,m1,h2,m2,e,f,g;
    while(scanf("%d %d %d %d",&h1,&m1,&h2,&m2)!=EOF)
    {
        if(h1==0 && m1==0 && h2==0 && m2==0)
    {
        break;
    }
    if(h1>h2 && m1>m2)
    {
        e=(24+h2)-(h1+1);
        f=(60+m2)-m1;
        g=(60*e)+f;
        printf("%d\n",g);

    }
    else if(h1>h2 && m2>m1)
    {
        e=(24+h2)-h1;
        f=m2-m1;
        g=(60*e)+f;
        printf("%d\n",g);
    }
    else if(h2>h1 && m1>m2)
    {
        e=h2-(h1+1);
        f=(60+m2)-m1;
        g=(60*e)+f;
        printf("%d\n",g);
    }
    else if(h2>h1 && m2>m1)
    {
        e=h2-h1;
        f=m2-m1;
        g=(60*e)+f;
        printf("%d\n",g);
    }
    else if(h2>h1 && m1==m2)
    {
        e=h2-h1;
        g=60*e;
        printf("%d\n",g);
    }
    else if(h1>h2 && m1==m2)
    {
        e=(24+h2)-h1;
        g=60*e;
        printf("%d\n",g);
    }
    else if(h1==h2 && m1>m2)
    {
        g=(60*(24-1))+((60+m2)-m1);
        printf("%d\n",g);
    }
    else if(h1==h2 && m2>m1)
    {
        g=m2-m1;
        printf("%d\n",g);
    }
    else if(h1==h2 && m1==m2)
    {
        e=24;
        g=24*60;
        printf("%d\n",g);
    }
    }
    return 0;

}
