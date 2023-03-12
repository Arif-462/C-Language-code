#include<stdio.h>
int max_value(int a, int b, int c, int d)
{
    if(a>b && a>c && a>d)
        return a;
    else if(b>a && b>c && b>d)
        return b;
    else if(c>a && c>b && c>d)
        return c;
    else
        return d;
}

int main(void)
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a, &b, &c, &d);

    int max=max_value(a,b,c,d);
    printf("%d\n",max);
    return 0;
}
