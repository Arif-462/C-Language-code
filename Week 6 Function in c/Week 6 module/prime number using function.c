#include<stdio.h>

int prime(int x)
{
    int i;
    if(x==2)
    {
        return 1;
    }
    else if(x==1)
    {
        return 0;
    }

    else
    {
        for( i=2; i<=x/2 ; i++)
        {
            if(x % i == 0 )
            {
                return 0;
            }

        }
        return 1;
    }

}


int main()
{
    int a, i;

    scanf("%d", &a);
    i = prime(a);

    if(i==1)
    {
        printf("%d is a prime number\n",a);

    }
    else
    {
        printf("%d is not a prime number\n",a);
    }









    return 0;
}
