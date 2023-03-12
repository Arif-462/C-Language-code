#include<stdio.h>
void print_array(int *arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<size; i++)
    {
       printf("%d ",*(arr+i));
    }
}

int main(void)
{
    int n;
    scanf("%d",&n);
    int ara[n];
    print_array(ara, n);

    return 0;
}
