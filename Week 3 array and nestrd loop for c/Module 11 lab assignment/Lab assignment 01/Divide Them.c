#include<stdio.h>
int main()
{
    int n,i,k;
    int arr[25];


    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        scanf("%d",&arr[i]);

    }
    scanf("%d",&k);
    for(i=k+1; i<=n; i++)
    {
        printf("%d ",arr[i]);
    }

    for(i=1; i<=k; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
