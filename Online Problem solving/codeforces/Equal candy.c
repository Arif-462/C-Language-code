
#include<stdio.h>
int main()
{
    int i,n,j,t;
    int arr[100];
    printf("enter test:\n");
    scanf("%d",&t);

    for(i=0; i<t; i++)
    {
        printf("enter pack:\n");

        scanf("%d",&n);

        for(j=0; j<n; j++)
        {
            scanf("%d",&arr[i]);
        }

        //int min=arr[0];
        int count=0;

        for(j=0; j<n; j++)
        {
            printf("%d ",arr[i]);
            count++;
        }
        //printf("%d",min);
        printf("\ncount = %d",count);





    }


    return 0;
}
