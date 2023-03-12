#include<stdio.h>
int factorial(int x)
{
    if(x>0)
    {
         return x*factorial(x-1);
    }
    else
    {
       return 1;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int fact = factorial(n);
    printf("%d\n",fact);
    return 0;
}
