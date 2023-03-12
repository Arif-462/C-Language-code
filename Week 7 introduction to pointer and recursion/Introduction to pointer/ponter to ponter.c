#include<stdio.h>
int main()
{
    int a=5;
    printf("%d\n",a);
    int* p=&a;
    printf("%p\n",p);

    int** q;
    q=&p;

     printf("%p\n",q);

     **q=2;
     printf("%d\n",a);
    return 0;
}

