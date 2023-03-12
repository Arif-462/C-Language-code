#include <stdio.h>
int  sorted_even_odd_arr(int arr[], int n)
{
    int i,index = 0;
    for(i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            arr[index]= i;
            index ++ ;
        }
    }

    for(i=1; i<=n; i++)
    {
        if(i%2==1)
        {
            arr[index]= i;
            index ++ ;
        }
    }
    return arr[i];

}

void find_k_th_number(int arr[], int n)
{
    int i,k;
    scanf("%d",&k);
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);

    }

    printf("\nThe %dth element in this sequence is %d.\n",k ,arr[k-1]);
}

int main(void)
{
    int n;
    scanf("%d",&n);
    int arr[n];
    sorted_even_odd_arr(arr,n);
    find_k_th_number(arr,n);

    return 0;
}

/*
int main()
{
    int i,j,n,k;

    scanf("%d",&n);

    int store[n];

    scanf("%d",&k);

    int index = 0;
    for(i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            store[index] = i;
            index ++;
        }

    }

    for(i=1; i<=n; i++)
    {

        if(i%2==1)
        {
            store[index] = i;
            index ++;
        }
    }

    for(i=0; i<n; i++)
    {

        printf("%d ",store[i]);

    }
    printf("\nThe %dth element in this sequence is %d.\n",k,store[k-1]);

    return 0;
}
*/
