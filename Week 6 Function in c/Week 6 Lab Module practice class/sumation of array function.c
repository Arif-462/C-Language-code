#include<stdio.h>

int add_them(int ara[], int size)
{
   int sum=0;
   for(int i=0; i<size; i++)
   {
       sum = sum + ara[i];
   }
   printf("%d\n",sum);
}

int main(void)
{
    int arr[]={5,8,9,72,5,10,54,65,458};

    add_them(arr, 9);

    return 0;
}
