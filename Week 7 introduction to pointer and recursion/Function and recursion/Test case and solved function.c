#include<stdio.h>
void solved()
{
    int a, b;
    scanf("%d %d",&a, &b);
    int sum = a + b;
    printf("sum = %d\n",sum);

}

int main(void)
{
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        solved();
    }
    return 0;
}
