#include<stdio.h>
int g = 7; // global variable for all functions.
void add_two_nimbers()
{
    int a, b;//Local variable.within func.
    int g=25;
    scanf("%d %d",&a, &b);
    int sum = a+ b;
    printf("sum is %d\n",sum);
    printf("add function %d\n",g);
    g=g+5;

}

int main()
{
    int g=10;
    add_two_nimbers();
    printf("main function %d\n",g);
    //printf("main function %d\n",g);
    {
        extern int g;
        printf("main function %d\n",g);

    }


    return 0;
}

