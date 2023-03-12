#include<stdio.h>
float get_pI_value(void)
{
    return 3.1416;
}

float print_PI_value(void)
{
    float pi = get_pI_value();
    printf("%f\n",pi);
}


int main(void)
{
    float pI = get_pI_value();

    print_PI_value();


    return 0;
}
