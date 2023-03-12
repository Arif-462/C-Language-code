#include<stdio.h>
int input_array(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

}

void sum_of_array(int arr[], int size)
{

    int sum=0,i;

   for(int i=0; i<size; i++)
    {
       if(arr[i]%10==0)
       {
           sum= sum+arr[i];
       }
    }
    printf("%d\n",sum);

}

int main(void)
{
    int n;
    scanf("%d",&n);
    int ara[n];
    input_array(ara, n);
    sum_of_array(ara,n);
    return 0;
}
