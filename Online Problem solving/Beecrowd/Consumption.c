#include<stdio.h>
int main()
{
    int x;
    double d,c;
    scanf("%d", &x);
    scanf("%lf",&d);
    c=x/d;
    printf("%.3lf km/l\n",c);

    return 0;
}
