#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter hollow patern number: ");

    scanf("%d",&n);

    //n stars print

    for(j=1; j<=n; j++)
        {
            printf("%d ",j);
        }
    printf("\n");


    for(i=1; i<=n-1; i++)
    {
        printf("%d ",j);


        for(j=2; j<=(n-1); j++)
        {
            printf("  ");
        }
        printf("%d \n",j);
    }

    //n stars print
    for(j=1; j<=n; j++)
        {
            printf("%d ",i);

        }

    printf("\n");



    return 0;
}

