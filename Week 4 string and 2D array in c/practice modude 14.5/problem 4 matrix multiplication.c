#include<stdio.h>
int main()
{
    int i,j,k;
    int row = 3;
    int col = 3;
    int matrix[row][col];
    int mat[row][col];
    int result[row][col];


    printf("Enter first matrix elements:\n");

    for(i=0; i<row; i++)
    {
        for(j=0;j<col; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("\nEnter second matrix elements:\n");

    for(i=0; i<row; i++)
    {
        for(j=0;j<col; j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }

   printf("\nFirst matrix:\n");

    for(i=0; i<row; i++)
    {
        for(j=0;j<col; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }


    printf("\nSecond matrix:\n");
    for(i=0; i<row; i++)
    {
        for(j=0;j<col; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }


    printf("\nMultiplication matrix:\n");
    for(i=0; i<row; i++)
    {
        for(j=0;j<col; j++)
        {
            result[i][j]=0;

            for(k=0; k<row; k++)
            {
                result[i][j] = result[i][j] + matrix[i][k] * mat[k][j];

            }
        }
        printf("\n");
    }

    for(i=0; i<row; i++)
    {
        for(j=0;j<col; j++)
        {
            //result[i][j]=0;



                printf("%d ",result[i][j]);


        }
        printf("\n");
    }






    return 0;
}
