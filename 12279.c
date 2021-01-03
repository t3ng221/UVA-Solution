#include<stdio.h>
int main()
{
    int a,b,c,i,j,m=0,n=0,p=0,T,U;
    while(scanf("%d",&a)!=EOF)
    {

        p++;
        if(a==0)
        {
            break;
        }

        m=0;
        n=0;
        for(i=0; i<a; i++)
        {
            scanf("%d",&c);
            if(c>0)
            {
                m++;
            }
            else if(c==0)
            {
                n++;
            }
        }
        T=m-n;
        printf("Case %d: %d\n",p,T);
    }
    return 0;
}
