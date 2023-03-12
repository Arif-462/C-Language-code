#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        int n;
        scanf("%d",&n);
        if(n<=9)
        {
            printf("%d\n",n);
        }
        else
        {
            int res=9, value = 10, count=1;
            for(int i=10; i<=n; i = i + value)
            {
                if(count==10)
                {
                    value= value*10;
                    count=1;
                }
                res++;
                count++;
            }
            printf("%d\n",res);

        }
    }
    return 0;
}
