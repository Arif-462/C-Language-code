#include<stdio.h>
int add_three_nums(int a, int b, int c)
{
    return a+b+c;
}
void disply_result(int a, int b)
{
    int c = 0;
    int sum = add_three_nums(a, b, c);
    printf("Sum is = %d\n",sum);
}
int main(void)
{
    int x,y;
    printf("Enter two integer numbers:\n");
    scanf("%d %d", &x, &y);
    disply_result(x, y);

    return 0;
}
