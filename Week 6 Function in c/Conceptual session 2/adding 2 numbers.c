#include<stdio.h>
int add_two_numbers(int num1, int num2)
{
    int sum=num1+num2;
    return sum;
}

void print_int_type_variable(int num)
{
    printf("%d\n",num);
}

int main()
{
    int a = 2;
    int b = 5;
    int sum_a_b = add_two_numbers(a,b);
    print_int_type_variable(sum_a_b);

    int sum1 = add_two_numbers(100, 200);
    print_int_type_variable(sum1);


    return 0;
}
