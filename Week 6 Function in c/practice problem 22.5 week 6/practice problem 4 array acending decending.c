#include<stdio.h>
int input_array(int ara[], int size)
{
    for(int i=0; i<size; i++)
    {
        scanf("%d",&ara[i]);
    }

}

int sorting_array(int ara[], int size)
{
    int temp=0,i;

    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(ara[i]>ara[j])
            {
                temp=ara[i];
                ara[i]=ara[j];
                ara[j]=temp;
            }
        }
    }

}

void ascending_decending_array(int ara[], int size)
{
    sorting_array(ara,size);

    for(int i=0; i<size; i++)
    {
        printf("%d ",ara[i]);
    }

    printf("\n");

    for(int i=size-1; i>=0; i--)
    {
        printf("%d ",ara[i]);
    }

    return 0;
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    input_array(arr, n);
    sorting_array(arr, n);
    ascending_decending_array(arr,n);

    return 0;
}



/*
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
       scanf("%d",&arr[i]);
    }
    int temp=0;
    for(int i=0; i<n; i++)
    {
       for(int j=i+1;j<n; j++)
       {
           if(arr[i]>arr[j])
           {
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
           }
       }
    }

    for(int i=0; i<n; i++)
    {
       printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i=n-1; i>=0; i--)
    {
       printf("%d ",arr[i]);
    }
    return 0;
}
*/

/*
#include<stdio.h>

int ara[1000];
int input_array(int size)
{
    for(int i=0; i<size; i++)
    {
        scanf("%d",&ara[i]);
    }

}

int sorting_array(int size)
{
    int temp=0,i;

    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(ara[i]>ara[j])
            {
                temp=ara[i];
                ara[i]=ara[j];
                ara[j]=temp;
            }
        }
    }
}

void ascending_decending_array(int size)
{

    for(int i=0; i<size; i++)
    {
        printf("%d ",ara[i]);
    }

    printf("\n");

    for(int i=size-1; i>=0; i--)
    {
        printf("%d ",ara[i]);
    }

    return 0;
}

int main()
{
    int n;
    scanf("%d",&n);
    input_array(n);
    sorting_array(n);
    ascending_decending_array(n);

    return 0;
}
*/
