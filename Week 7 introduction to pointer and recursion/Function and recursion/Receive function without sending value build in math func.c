#include<stdio.h>
int teke_radious()
{
int r;
    printf("Enter radious\n");
    scanf("%d",&r);
    return r;
}

void area(int n)
{
    float ans = 3.14159*n*n;
    printf("Area of circle = %f\n",ans);
}
int main()
{
    int r;
    r = teke_radious();
    area(r);
}
