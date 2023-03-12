#include<stdio.h>
int main()
{
    int value=20;
    int* p=&value;

    printf("%p\n",p);
    printf("%d",*p);

    return 0;
}
