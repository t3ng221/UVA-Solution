#include<stdio.h>
int main()
{
    long long int a,b,c;
    int t,i=0;
    scanf("%d",&t);
    if(t>0 && t<20)
    {
        for(i=1;i<=t;i++)
        {
      scanf("%lld %lld %lld",&a,&b,&c);
      if(a+b>c && b+c>a && a+c>b)
      {
        if(a==b && b==c)
        {
            printf("Case %d: Equilateral\n",i);
        }

        else if(a==b || b==c || c==a)
        {
                printf("Case %d: Isosceles\n",i);
        }
        else if(a!=b && b!=c)
        {
            printf("Case %d: Scalene\n",i);
        }
      }
      else
      {
          printf("Case %d: Invalid\n",i);
      }
    }
    }
    return 0;
}
