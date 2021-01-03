#include<stdio.h>
int main()
{
    int a,b,c,d,e,g,f,i,j;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&b);
        c=b*567;
        d=(((((c/9)+7492)*(235))/(47))-498);
        e=d/10;
        f=e%10;
        if(f<0)
        {
            g=f*(-1);
            printf("%d\n",g);
        }
        else
        {
            printf("%d\n",f);
        }

    }
    return 0;
}
