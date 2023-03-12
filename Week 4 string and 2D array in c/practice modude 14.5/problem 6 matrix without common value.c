#include<stdio.h>
int main()
{
    int i,j,n=3;
    int matrix[n][n];

    printf("Enter element:\n");
    for(i=0;i<n;i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("Matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0; j<n; j++)
        {


            if(i==j)
            {
                matrix[i][j]=0;
            }


            if(matrix[i][j] != 0)
            printf("%d  ",matrix[i][j]);


        }


           printf("\n");
    }
    return 0;
}
