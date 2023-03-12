#include<stdio.h>
int main()
{
    int a=5;
    int* p;
    p=&a;
    //*p=7; // value change.
    int* q;
    q=p;
    *q=13; //pointere value change.
    printf("%d\n",a);
    return 0;
}

