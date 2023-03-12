#include<stdio.h>
int g = 7; // global variable for all functions.
void add_two_nimbers()
{
    int a, b;//Local variable.within func.
    scanf("%d %d",&a, &b);
    int sum = a+ b;
    printf("sum is %d\n",sum);
    printf("add function %d\n",g);
    g=g+5;
}

int main()
{
    add_two_nimbers();
    printf("main function %d\n",g);
    return 0;
}
