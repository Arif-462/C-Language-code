#include<stdio.h>
int input_array(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
}

void swap(int *a, int *b)
{
    int temp = *b;
    *b=*a;
    *a=temp;
}


int swaping_array(int arr[], int size)
{
    int temp;
    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(arr[i]>arr[j])
            {
               swap(&arr[i], &arr[j]);
            }
        }

    }
}

int print_array(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
}

int main(void)
{
    int n;
    scanf("%d",&n);
    int ara[n];
    input_array(ara,n);
    swaping_array(ara,n);
    print_array(ara, n);

    return 0;


}
