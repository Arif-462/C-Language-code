#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int flag=0;
    if(n==7 || n==4)
    {
        flag=0;
    }
    else
    {
        while(n>0)
        {


            if(n%10==4 || n%10==7)
            {
                n=n/10;
                flag=1;
            }
            else
            {
                flag=0;
                break;
            }
        }

    }


    if(flag==1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
