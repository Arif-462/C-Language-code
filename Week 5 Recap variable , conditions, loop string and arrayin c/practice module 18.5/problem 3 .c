#include<stdio.h>
int main()
{
    int i,n;

    int a[100];
    printf("Enter the array size:\n");

    scanf("%d",&n);

     printf("Enter the array elements:\n");


    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    int s,count=0;

     for(i=0; i<n; i++)
    {
        s=a[i]%10;
        count=count+s;
    }

    printf("Sum = %d\n",count);

    return 0;
}
