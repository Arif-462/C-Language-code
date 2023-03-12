/*
first amra 5 ta input nibo,
pore dekhlam amar aro input lagbe and purbergula soho pre ekshathe amra print
korbo.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter first array size.\n");
    scanf("%d",&n);

    int* ptr= (int*)malloc(n*sizeof(int));
    printf("%p\n",ptr);

    printf("Enter array element:\n");

    for(int i=0; i<n; i++)
    {
        scanf("%d",(ptr+i));
    }
    for(int i=0; i<n; i++)
    {
        printf("%d ",*(ptr+i));
    }


    int m;
    printf("\nEnter more array size.\n");
    scanf("%d",&m);
    m = n + m;

    ptr = realloc(ptr, (n*sizeof(int)));
    printf("%p\n",ptr);

    printf("Enter more array elements:\n");

    for(int i=n; i<m; i++)
    {
        scanf("%d",(ptr+i));
    }
    for(int i=0; i<m; i++)
    {
        printf("%d ",*(ptr+i));
    }

    free(ptr);
    return 0;
}
