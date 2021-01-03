#include<stdio.h>
int main()
{
    int a,b,c,i,m,n;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d %d",&b,&c);
        m=b+c;
        n=b-c;
        if(m%2==0 && n%2==0 && n>=0)
        {

            printf("%d %d\n",(m/2),(n/2));
        }
        else if(b%2==1 || c%2==1 ||n<=0)
        {
            printf("impossible\n");
        }
    }
    return 0;
}
