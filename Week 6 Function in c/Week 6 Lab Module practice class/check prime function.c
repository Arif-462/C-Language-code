#include<stdio.h>
int is_prime(int x)
{
    for(int i=2; i<x; i++)
    {
        if(x % i == 0)
        {
            return 0;
        }

    }
     return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(is_prime(n)==1)//==1 na dilew cholbe.
    {
        printf("The number is prime\n");
    }
    else
    {
        printf("The number is composite\n");
    }
    return 0;
}
