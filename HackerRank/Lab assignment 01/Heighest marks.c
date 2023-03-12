#include<stdio.h>
int main()
{
    int n,i;
    int arr[105];
    scanf("%d",&n);

    for(i = 0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int max = arr[0];

    for(i = 0; i<n; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }

    for(i = 0; i<n; i++)
    {
        printf("%d ",max-arr[i]);
    }

    return 0;
}
