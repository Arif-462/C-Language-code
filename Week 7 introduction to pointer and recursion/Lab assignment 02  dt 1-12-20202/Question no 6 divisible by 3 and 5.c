#include<stdio.h>
int div_three(int ara[], int size);
int div_five(int ara[], int size);

int main(void)
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum = div_three(arr, n) + div_five(arr, n);

    if(div_three(arr, n)== 0 && div_five(arr, n)== 0)
    {
        printf("-1\n");
    }
    else
    {
       printf("%d\n",sum);
    }
    return 0;
}

int div_three(int ara[], int size)
{
    int count = 0;
    for (int i= 0; i<size; i++)
    {
        if(ara[i] % 3 == 0)
        {
            count ++;
        }
    }
    return count;
}

int div_five(int ara[], int size)
{
    int count5=0;
    for(int i=0; i<size; i++)
    {
        if(ara[i] % 5 == 0 && ara[i]%3!=0)
        {
            count5++;
        }
    }
    return count5;
}

