#include<stdio.h>
int print_consecutive_even(int x)
{
    for(int i=1; i<=4; i++)
    {
        if(x % 2 == 0)
        {
            x = x/4;
        }
        printf("%d ",x-3);
        x+=2;
    }
}

int main()
{
    int n,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        print_consecutive_even(n);
        printf("\n");
    }

    return 0;
}
