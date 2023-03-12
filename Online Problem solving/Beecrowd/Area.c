#include<stdio.h>
#include<math.h>
void area_triangle(double a, double c)
{
    double area = a*c/2;
    printf("TRIANGULO: %.3lf\n",area);
}
void area_circle(double c)
{
    double pi=3.14159;
    double area =c*c*pi;
    printf("CIRCULO: %.3lf\n",area);
}
void area_trapizium(double a, double b, double c)
{

    double area =(a+b)/2*c;
    printf("TRAPEZIO: %.3lf\n",area);
}
void area_square(double b)
{

    double area =b*b;
    printf("QUADRADO: %.3lf\n",area);
}
void area_rectangle(double a, double b)
{

    double area =a*b;
    printf("RETANGULO: %.3lf\n",area);
}
int main()
{
    double a,b,c;
    scanf("%lf %lf %lf", &a, &b, &c);

    area_triangle(a,c);
    area_circle(c);
    area_trapizium(a,b,c);
    area_square(b);
    area_rectangle(a,b);
    return 0;
}
