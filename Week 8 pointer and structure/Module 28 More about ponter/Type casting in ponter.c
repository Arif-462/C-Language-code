#include<stdio.h>
int main()
{
    int a = 7;
    double b = 8.65;
    int *pi;
    double *pd;

    pi = &a;
    //pd = pi; // not right way and error.
    pd = (double*)pi; // right way .


    printf("%d %lf\n",a, b);
    printf("%p %p\n",pi, pd);
    return 0;

}
