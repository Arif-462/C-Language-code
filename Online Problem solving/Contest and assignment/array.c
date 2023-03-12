#include<stdio.h>
int main()
{
    int n;
    int arr[10000];
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum= sum+arr[i];
    }
    printf("%d\n",sum);
    return 0;
}
