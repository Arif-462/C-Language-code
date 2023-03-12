#include<stdio.h>
int main()
{
    int arr[5]={5,10,15,20,25};
    int *ptr= &arr;

    //printf("%p\n",ptr);
   // ptr++;

    //printf("%p \n",ptr);
   // ptr++;

    //printf("%p \n",ptr);


    //printf("%d\n",*ptr);
    //ptr++;

    //printf("%d \n",*ptr);
    //ptr++;

    //printf("%d \n",*ptr);

    for(int i=0; i<5; i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }
    return 0;
}
