#include<stdio.h>
int main()
{
    int a, *p;
    a=10;
    p=&a;
    printf("%d\n",p);
    printf("%d\n",*p);

    int ara[3]={1,2,3};

    printf("%d",ara);//ara nijei akta ponter.
    return 0;
}

