#include<stdio.h>
int main()
{
    int array[10];

    array[0]=3456;
    array[1]=456;
    array[2]=2450;
    array[3]= array[0]-array[1];
    array[4]=array[0]+array[1];
    array[5]=array[3]*array[1];
    array[6]=array[4]/array[2];

    printf("%d\n",array[0]);
    printf("%d\n",array[1]);
    printf("%d\n",array[2]);
    printf("%d\n",array[3]);
    printf("%d\n",array[4]);
    printf("%d\n",array[5]);
    printf("%d\n",array[6]);

    return 0;
}
