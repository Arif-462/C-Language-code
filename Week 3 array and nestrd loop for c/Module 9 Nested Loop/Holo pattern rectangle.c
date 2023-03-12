#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter hollow patern number: ");

    scanf("%d",&n);

    //n stars print

    for(j=1; j<=n; j++)
        {
            printf("*");
        }
    printf("\n");


    for(i=1; i<=(n-2); i++)
    {
        printf("*");


        for(j=1; j<=(n-2); j++)
        {
            printf(" ");
        }
        printf("*\n");
    }

    //n stars print
    for(j=1; j<=n; j++)
        {
            printf("*");

        }

    printf("\n");



    return 0;
}
