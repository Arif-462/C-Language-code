#include<stdio.h>
int find_prime(int *ara, int size)
{
    int count=0;

    for(int i=0; i<size; i++)
    {
        int f=0;
        for(int j=2; j<*(ara+i); j++)
        {
            if(*(ara+i) % j == 0)
            {
                f = 1 ;
                break;
            }
        }
        if(f==0)
        count++;

    }
    printf("\nPrime numbers: %d\n",count);
}
int finding_average(int *ara, int size)
{
    int sum = 0;
    for(int i=0; i<size; i++)
    {
        if(*(ara+i) % 2 == 0)
        {
            sum = sum + *(ara+i);
        }
    }

    float avg = (float)sum/2;
    printf("\nAverage of all positive integers: %.2f\n",avg);

}
int main(void)
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    find_prime(arr, n);
    finding_average(arr, n);
    return 0;
}

/*
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int count=0;

    for(int i=0; i<n; i++) //ok
    {
        int d=arr[i];
        int f=0;
        for(int j=2; j<d; j++)
        {
            if(d % j == 0)
            {
                f = 1 ;
                break;
            }
        }
        if(f==0)
        count++;

    }
    printf("\nPrime numbers: %d\n",count);

    int sum = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            sum = sum + arr[i];
        }
    }

    float avg = (float)sum/2;
    printf("\nAverage of all positive integers: %.2f\n",avg);


}
*/
