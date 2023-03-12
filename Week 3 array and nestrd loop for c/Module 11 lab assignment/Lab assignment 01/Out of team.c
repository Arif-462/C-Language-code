#include<stdio.h>
int main()
{
    int n,k,i;
    int arr[105];
    int result,result1,result2;

    scanf("%d %d",&n,&k);

    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(i=0; i<n; i++)
    {
        if(arr[i]<=60)
        {
            result= (60-arr[i])*1;
        }
        if(arr[i]<=80)
        {
            result1=(80-arr[i])*2;
        }
        if(arr[i]>=99)
        {
            result2=(99-arr[i])*3;
        }
    }
    printf("%d minutes",result+result1+result2);



    return 0;
}
