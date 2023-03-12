
#include<stdio.h>
int main()
{
    int i,j;

    int a[10][10];
    int b[10][10];
    int sum[10][10];


    int row,col;

    scanf("%d %d",&row,&col);

    // first matrix

    printf("\n");
    for(int i=0; i<row;i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d",&a[i][j]);

        }

    }



    printf("\n\nFirst matrix.\n");
    for(int i=0; i<row;i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("%d ",a[i][j]);

        }
        printf("\n");

    }


    // first matrix end.



    // second matrix start.
    printf("\n");

    for(int i=0; i<row;i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d",&b[i][j]);

        }
    }


    //printf("\n\nSecond matrix.\n");

    printf("\n\nSecond matrix.\n");
    for(int i=0; i<row;i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("%d ",b[i][j]);

        }
         printf("\n");

    }


    // sumation of two matrix.

    printf("\n\nSum of two matrix.\n");

    for(int i=0; i<row;i++)
    {
        for(int j=0; j<col; j++)
        {
            sum[i][j]=a[i][j]+b[i][j];

            printf("%d ",sum[i][j]);

        }
         printf("\n");

    }


    return 0;


}
