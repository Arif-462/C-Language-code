#include<stdio.h>
int main(void)
{
    int *a=20;
    int *b=&a;
    printf("address a =  %d\n",&a);
    printf("address b = %d\n",b);

    *b=100;
    printf("value a = %d and value b = %d\n",a,*b);

}
