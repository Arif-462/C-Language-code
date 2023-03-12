#include<stdio.h>
void decending_array(int ar[], int n)
{
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);

    }
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(ar[i]<ar[j])
            {
                temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
        }

    }

}

void ascending_array(int ar[], int n)
{
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);

    }
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(ar[i]>ar[j])
            {
                temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
        }

    }

}

void array_element(int arr1[], int arr2[],  int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr1[i]-arr2[i]);

    }
}

int main(void)
{
    int n;
    scanf("%d",&n);
    int ar1[n];
    int ar2[n];
    ascending_array(ar1,n);
    decending_array(ar2,n);
    array_element(ar1, ar2, n);

    return 0;
}

//ajkjkjk
 /*
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr1[n];
    int arr2[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr1[i]);

    }
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr2[i]);

    }
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr1[i]>arr1[j])
            {
                temp=arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=temp;
            }
        }

    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr2[i]<arr2[j])
            {
                temp=arr2[i];
                arr2[i]=arr2[j];
                arr2[j]=temp;
            }
        }
    }

    printf("\n");
     for(int i=0; i<n; i++)
    {
        printf("%d ",arr1[i]-arr2[i]);

    }
    return 0;
}
*/
