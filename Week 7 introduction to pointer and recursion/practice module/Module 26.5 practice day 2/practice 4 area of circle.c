#include<stdio.h>
#include<math.h>
int area_circle(double n)
{
    double area;
    area = (double)3.1416*n*n;
    printf("%lf\n",area);
}

int main()
{
    double r;
    scanf("%lf",&r);
    area_circle(r);

    return 0;
}
