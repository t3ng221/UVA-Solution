#include<stdio.h>
int main()
{
    int a,b,c,d,h,e,f,g;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(a==-1 || b==-1)
        {
            break;
        }
        c=a-b;
        d=(100-a+b);
        e=b-a;
        f=100+a-b;
        g=100-b;
        h=100-a;
        if(a>b)
        {
            if(c>=d)
            {
                printf("%d\n",d);
            }
            else
            {
                printf("%d\n",c);
            }
        }
        else if(a==b)
        {
            printf("%d\n",c);
        }
        else if(d==0 || f==0)
        {
            printf("1\n");
        }
        else if(a<b)
        {
            if(e>=f)
            {
                printf("%d\n",f);
            }
            else
            {
                printf("%d\n",e);
            }
        }
        else if(a==0)
        {
            printf("%d\n",g);
        }
        else if(a!=0 && b==0)
        {
            printf("%d\n",h);
        }
    }
    return 0;
}
