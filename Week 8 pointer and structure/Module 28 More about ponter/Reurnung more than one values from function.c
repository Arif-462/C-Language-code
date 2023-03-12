
#include<stdio.h>
void func(int x, int y, int* p, int* q)
{
//    if(x>y)
//    {
//        *p = x;
//        *q = y;
//    }
//    else
//    {
//        *p = y;
//        *q = x;
//    }

    *p = x>y?x:y; //if else er moto kaj kore.
    *q = x<y?x:y;//jodi sotto hoy tahole x execute hobe nahole y.
}

int main()
{
    int a = 5, b = 12;
    int large, small;
    func(a, b, &large, &small);
    //printf("%d %d\n",a, b);
    printf("%d %d\n",large, small);
    return 0;
}



/*
#include<stdio.h>

void func(int* p)
{
    *p = 17;
}

int main()
{
    int a = 5;
    func(&a);
    printf("%d\n",a);//value change.
    return 0;
}
*/
