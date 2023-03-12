// A program that calculates the square root of integers
#include <stdio.h>
#include <math.h>

int main() {
    for (int i = 4; i >= -2; i--)     {
        printf("%f", sqrt(i));
        printf("\n");
    }
    return 0;
}
/*
#include <stdio.h>

int main()
{
    float m = 10;
    float n = 5;

    if (n = 0) // we wrote = instead of ==
    {

        printf("Division by zero is not possible");
    }
    else
    {
        printf("The output is: %f", m/n);
    }

    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int a, b,c;
    a*b = c;
    // generate a semantic error.

    return 0;
}
/*
#include <stdio.h>

int Main() //linker error
{
    int a = 05;
    printf("%d",a);
    return 0;
}

*/
