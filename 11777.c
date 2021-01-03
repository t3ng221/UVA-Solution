#include<stdio.h>
int main()
{
    int a,i,j,q,w,e,r,t,y,u,sum=0;
    double avg,ans;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%d %d %d %d %d %d %d",&q,&w,&e,&r,&t,&y,&u);
        if(t<y && t<u)
        {
            sum=u+y;
        }
        else if(y<t && y<u)
        {
            sum=t+u;
        }
        else if(u<t && u<y)
        {
            sum=t+y;
        }
        else if(t==u &&t==y)
        {
            sum=t+u;
        }
        else if(t==u)
        {
            if(t>y)
            {
                sum=t+u;
            }
            else if(t<y)
            {
                sum=y+t;
            }

        }
        else if(t==y)
        {
            if(t>u)
            {
                sum=t+y;
            }
            else if(t<u)
            {
                sum=t+u;
            }

        }
        else if(u==y)
        {
            if(u>t)
            {
                sum=u+y;
            }
            else if(u<t)
            {
                sum=u+t;
            }

        }

        avg=sum/2.0;
        ans=q+w+e+r+avg;
        if(ans>=90)
    {
        printf("Case %d: A\n",i);
    }
    else if(ans>=80 && ans<90)
    {
        printf("Case %d: B\n",i);
    }
    else if(ans>=70 &&ans <80)
    {
        printf("Case %d: C\n",i);
    }
    else if(ans>=60 && ans<70)
    {
        printf("Case %d: D\n",i);
    }
    else if(ans<60)
    {
        printf("Case %d: F\n",i);
    }

}
}
