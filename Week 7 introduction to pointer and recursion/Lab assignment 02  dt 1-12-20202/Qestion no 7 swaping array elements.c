#include<stdio.h>
void indexx(int *x, int *y);
void swap_array(int* arr,int n);

int main(void)
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&arr[i]);
    }
    swap_array(arr,n);
    return 0;
}

void indexx(int *x, int *y)
{
    int temp;

    temp  = *x;
    *x  = *y ;
    *y  =  temp;

}

void swap_array(int* arr,int n)
{
    int k;
    scanf("%d",&k);
    int L,R;

    for(int i=0; i<k; i++)

    {
        scanf("%d %d",&L,&R);
        indexx(&arr[L],&arr[R]);

    }
    for(int i=1; i<=n; i++)
    {
        printf("%d ",arr[i]);

    }
}

/*
#include<stdio.h>

void replace_swap(int* arr,int n);

void  swap(int* num1, int* num2);

int main()

{

    int n;

    scanf("%d",&n);

    int arr[n];

    for(int i=1;i<=n;i++)

    {

        scanf("%d",&arr[i]);

    }

    replace_swap(arr,n);


    return 0;

}


void replace_swap(int* arr,int n)

{

    int k;

    scanf("%d",&k);

    int L,R;

    for(int i=0;i<k;i++)

    {

        scanf("%d %d",&L,&R);

        swap(&arr[L],&arr[R]);

    }

    for(int i=1;i<=n;i++)

    {

        printf("%d ",arr[i]);

    }

}

void swap(int *x,int *y)

{

    int t;

     t   = *x;

    *x   = *y;

    *y   =  t;

}


*/
