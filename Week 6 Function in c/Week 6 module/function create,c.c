#include<stdio.h>

int sumation( int x, int y)//created function
{
    printf("sum of two numbers are:\n");

    return x+y;
}

int main()
{
    int m,n;
    m=sumation(2,9);
    printf("%d\n",m);
    n=sumation(25,50);
    printf("%d\n",n);

    return 0;
}
