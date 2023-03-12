#include<stdio.h>
int find_factorial(int x)
{
    int i,fact=1;
    for(i=1; i<=x; i++)
    {
        fact = fact*i;
    }
    return fact;
}

float find_ratio(int x, int y)
{
    float result = (float)find_factorial(x) / find_factorial(y);

    printf("\nRatio of %d! and %d! is: %f\n",x,y,result);
}

int main(void)
{
    int a, b;
    printf("Enter two integer numbers:\n");
    scanf("%d %d", &a ,&b);
    find_ratio(a, b);
    return 0;
}



