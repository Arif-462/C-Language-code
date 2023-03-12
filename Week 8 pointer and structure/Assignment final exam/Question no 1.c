#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter two integer numbers : ");
    scanf("%d %d", &a, &b);
    if(a>b)
    {
        printf("%d is the maximum number\n",a);
    }
    else
    {
        printf("%d is the maximum number\n", b);
    }

    return 0;
}


//https://cses.fi/book/book.pdf
