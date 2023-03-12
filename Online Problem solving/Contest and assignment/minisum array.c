#include<stdio.h>
int main()
{

     long long int arr[100005];

    for(int i=0; i<5; i++)
    {
        scanf("%lld",&arr[i]);
    }
    long long int temp;
    for(int i=0; i<5; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
//    for(int i=0; i<5; i++)
//    {
//        printf("%d ",arr[i]);
//    }

    long long int maxSum=0;
    long long int minSum=0;
    for(int i=1; i<5; i++)
    {
        maxSum = maxSum+arr[i];
    }
    for(int i=0; i<4; i++)
    {
        minSum = minSum+arr[i];
    }
    printf("%lld %lld\n",minSum, maxSum);
    return 0;
}

