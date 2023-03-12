#include<stdio.h>
#include<math.h>
void result(int* a, int* b)
{
    int sum =*a + *b;
    printf("%d\n",sum);

    int value = abs(*a-*b);
    printf("%d\n",value);
}
int main(void)
{
    int a,b;
    scanf("%d %d",&a, &b);
    result(&a, &b);
    return 0;
}
