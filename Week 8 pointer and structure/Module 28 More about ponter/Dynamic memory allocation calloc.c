#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    scanf("%d",&n);

    int* ptr;
    ptr = (int*) calloc(n,sizeof(int)); //same malloc but sudhu * er jaygay , hobe.
    //printf("%d \n",calloc);

    if(ptr==NULL)
    {
        printf("Memory not available\n");
    }
    else
    {
        for(i= 0; i<n; i++)
        {
            scanf("%d",(ptr+i));
        }
        for(i= 0; i<n; i++)
        {
            printf("%d ",*(ptr+i)); // ptr[i] dilew print korbe.
        }
    }
    // jodi pore beshi jayga lage.
     ptr = realloc(ptr, (n+5),sizeof(int));
    free(ptr); // for memory free after finished.
    return 0;
}

