#include<stdio.h>
int solve(int arr[],int n)
{
    if(n==0) return 0;
    int sum=solve(arr+1,n-1);
    return sum + arr[0]; //same arr[0] and *(arr)
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int ans=solve(arr,n);
    printf("%d\n",ans);
    return 0;
}
