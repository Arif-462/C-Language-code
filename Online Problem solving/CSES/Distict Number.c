#include<stdio.h>
int main()
{
    int n,i;

    scanf("%d",&n);

    int input[100005];

    for(i=0; i<n; i+=1)
    {
        scanf("%d",&input[i]);
    }
    int largestElement=input[0];

    for(i=1; i<n; i+=1)
    {
        if(input[i]>largestElement)
        {
            largestElement=input[i];
        }

    }

    //printf("%d\n",largestElement);

    int arr[largestElement+1];

    for(i=0; i<=largestElement; i+=1)
    {
        arr[i]=0;
    }

//    for(i=0; i<=largestElement; i+=1)
//    {
//        printf("%d ",arr[i]);
//    }
//    printf("\n");


    for(i=0; i<n; i+=1)
    {
        arr[input[i]]+=1;
    }

    int distict=arr[0];
    for(i=0; i<=largestElement; i+=1)
    {
       if(arr[0]>arr[i])
       {
           distict=arr[i];
       }
    }

    printf("%d\n", arr[i]);


    return 0;
}
