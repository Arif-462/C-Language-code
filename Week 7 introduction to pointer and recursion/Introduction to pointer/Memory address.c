#include<stdio.h>
int main()
{
    //int a=12,b,c,d,e;

    int a[3]={1,2,3};

    printf("%p\n",&a);

//    printf("%p\n",&b);
//    printf("%p\n",&c);
//    printf("%p\n",&d);
//    printf("%p\n",&e);

for(int i=0; i<5; i++)
{
    printf("%p\n",&a[i]);
}
    return 0;
}
