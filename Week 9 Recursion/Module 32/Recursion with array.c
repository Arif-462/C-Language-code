#include<stdio.h>
int solve(int arr[],int i, int n )
{
    if(i==n) return 0;
    int sum = solve(arr, i+1 ,n);
    return sum + arr[i];
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
    int ans = solve(arr,0,n);
    printf("%d\n",ans);
    return 0;
}
