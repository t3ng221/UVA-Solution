#include<stdio.h>
int main()
{
    int a;
    while(scanf("%d",&a)!=EOF)
    {
        if(a==0)
        {
            break;
        }
        else if(a<=100)
            {
                printf("f91(%d) = 91\n",a);
            }
            else if(a>=101)
            {
                printf("f91(%d) = %d\n",a,a-10);
            }
    }
    return 0;
}
