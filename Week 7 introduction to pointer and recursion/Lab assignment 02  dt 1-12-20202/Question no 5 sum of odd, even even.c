#include<stdio.h>
int sum_odd_even_count_array(int ara[], int size)
{
    for(int i=1; i<=size; i++)
    {
        scanf("%d",&ara[i]);
    }
    int odd_sum=0;
    int even_sum=0;
    for(int i=1; i<=size; i++)
    {
        if(ara[i] % 2 == 1 && i % 2 == 1)
        {
            odd_sum = odd_sum + i + ara[i];
        }

        if(ara[i] % 2 == 0 && i % 2 == 0)
        {
            even_sum = even_sum + i + ara[i];
        }
    }
    int sum = even_sum + odd_sum;
    return sum;
}

int main(void)
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int sum = sum_odd_even_count_array(arr, n);
    printf("\n%d\n",sum);
    return 0;
}



