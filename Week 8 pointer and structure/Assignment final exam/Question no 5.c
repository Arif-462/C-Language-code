#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int *arr;

    arr =(int*) malloc (n*sizeof(int));
    if(arr ==NULL)
    {
        printf("Not Enough Memory\n");
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            scanf("%d",(arr+i));
        }
        for(int i=0; i<n; i++)
        {
            printf("%d ",*(arr+i));
        }
    }
    free(arr);
    return 0;
}
