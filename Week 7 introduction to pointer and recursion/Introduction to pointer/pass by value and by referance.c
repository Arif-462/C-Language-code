#include<stdio.h>
int swap(int* a, int* b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    int a=5, b=7;
    printf("a = %d,  b = %d\n",a,b);




    swap(&a,&b);
//    int temp;
//    temp=a;
//    a=b;
//    b=temp;






    printf("a = %d,  b = %d\n",a,b);




    return 0;
}


