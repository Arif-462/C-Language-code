#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    scanf("%d",&n);

    int* ptr;
    ptr = (int*) malloc(n*sizeof(int));
    //printf("%d \n",malloc);

    if(ptr==NULL)
    {
        printf("Memory not available\n");//for memory allocation check.
    }
    else
    {
        for(i= 0; i<n; i++)
        {
            scanf("%d",(ptr+i));
        }
        for(i= 0; i<n; i++)
        {
            printf("%d ",*(ptr+i));
        }
    }
    // jodi pore beshi jayga lage.
    ptr = realloc(ptr, (n+5)*sizeof(int));
    free(ptr); // for memory free after finished.
    return 0;
}
