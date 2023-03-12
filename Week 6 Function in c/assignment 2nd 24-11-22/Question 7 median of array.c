/*#include<stdio.h>
void get_array(int arr[], int size)
{
    printf("Enter elements of array:\n");
    for (int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
}

int sorted_array(int arr[], int size)
{
    int temp;
    for(int j=0; j<size; j++)
    {
        for(int i=0; i<size-1; i++)
        {
            if (arr[i]>arr[i+1])
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }

    }
    printf("Sorted array:\n");
    for(int i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }

}

int median_of_array(int arr[],int size )
{
    int sum=0;
    float median;

    if(size % 2 != 0)
    {
        sum = arr[size / 2];
        median = sum;
    }


    if(size % 2 == 0)
    {
        sum = arr[(size/2)-1] + arr[size/2];
        median = (float)sum / 2;
    }

    printf("\nMeadian of array = %f \n",median);
    //printf("%d \n",sum);
}


int main(void)
{
    int n;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    int arr[n];

    get_array(arr,n);
    sorted_array(arr,n);
    median_of_array(arr,n);

    return 0;
}

*/
#include<stdio.h>
int main()
{
    int n,i;
    float mean=0;
    int sum=0;
   //printf("Enter size:\n");
    scanf("%d",&n);
    int arr[n];
    //printf("Enter elements:\n");

    for (int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int tep;
     for(int j=0; j<n; j++)
    {
        for(int i=0; i<n-1; i++)
        {
            if (arr[i]>arr[i+1])
            {
                tep=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=tep;
            }
        }

    }
//    for(i=0; i<n; i++)
//        {
//            printf("%d ",arr[i]);
//        }
//    printf("\n");

    if(n%2!=0)
    {
        sum = arr[n/2];
        mean = sum;
    }


    if(n%2==0)
    {
        sum = arr[(n/2)-1]+ arr[n/2];
        mean = (float)sum/2;
    }

    //printf("%0.2f \n",mean);
    printf("%d \n",sum);

    return 0;

}

