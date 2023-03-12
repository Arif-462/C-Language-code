#include<stdio.h>

int even_odd(int x)
{
    if (x % 2== 0)
    {
        printf("Even number:\n");
    }
    else
    {
        printf("Odd number\n");
    }

    return x;
}

int main()
{
    int a;
    printf("Enter your number: ");
    scanf("%d",&a);

    even_odd(a);

    return 0;
}
