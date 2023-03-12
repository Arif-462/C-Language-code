#include<stdio.h>
int input_arra(int *ara, int size);
int check_saven(int *ara, int size);
int main(void)
{
    int n;
    scanf("%d",&n);
    int arr[n];
    input_arra(arr, n);
    check_saven(arr, n);

    return 0;
}
int input_arra(int *ara, int size)
{
    for(int i=0; i<size; i++)
    {
        scanf("%d",&ara[i]);
    }
}

int check_saven(int *ara, int size)
{
    int count=0;
    for(int i = 0; i < size; i++)
    {
        while(*(ara+i) > 0)
        {
            if(*(ara+i) % 10 == 7)
            {
                count ++;
            }
            *(ara+i) = *(ara+i) / 10;
        }

    }
    int d=0;
    if(size%2==1)
    {
        d = size/2+1;
    }
    else
    {
        d = size/2;
    }
    if(count >= d)
    {
        printf("Beautiful\n");
    }
    else
    {
        printf("Ugly\n");
    }
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
    int count=0;
    for(int i = 0; i < n; i++)
    {
        while(arr[i] > 0)
        {
            if(arr[i]%10==7)
            {
                count ++;
                 //printf("%d ",arr[i]);
            }
            arr[i] = arr[i] / 10;
        }

    }
    printf("\n%d\n",count);

    int d=0;
    if(n%2==1)
    {
         d=n/2+1;
    }
    else
    {
         d=n/2;
    }
    if(count >= d)
    {
       printf("Beautiful\n");
    }
    else
    {
        printf("Ugly\n");
    }


    return 0;
}
*/
