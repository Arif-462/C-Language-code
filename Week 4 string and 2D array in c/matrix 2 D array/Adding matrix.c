#include<stdio.h>
int main( )

{

    int i,j,n_rows,n_col;

    int A[10][10] ;
    int B[10][10] , C[10][10] ;
    printf("Enter the rows annd column.\n");
    scanf("%d %d",&n_rows,&n_col);


    printf("Enter elements for A matrix.\n");

    //scaning A matrix

    for(i=0; i<n_rows; i++)
    {
        for(j=0; j<n_col; j++)
        {
            printf("A[%d][%d]= ",i,j);

            scanf("%d", &A[i][j]);

        }

        printf("\n");

    }

    printf("Enter elements for B matrix.\n");

    //scaning B matrix.

    for(i=0; i<n_rows; i++)
    {
        for(j=0; j<n_col; j++)
        {
            printf("B[%d][%d]= ",i,j);

            scanf("%d", &B[i][j]);

        }

        printf("\n");

    }


    // print A matrix.

    printf("A matrix: ");

    for(i=0; i<n_rows; i++)
    {
        for(j=0; j<n_col; j++)
        {

            printf("%d  ", A[i][j]);

        }

        printf("\n");
        printf("\t  ");


    }



    // print B matrix.


    printf("\nB matrix: ");
    for(i=0; i<n_rows; i++)
    {

        for(j=0; j<n_col; j++)
        {

            printf("%d  ", B[i][j]);

        }

        printf("\n");
        printf("\t  ");

    }





    //Adding A snd B matixes.

    for(i=0; i<n_rows; i++)
    {
        for(j=0; j<n_col; j++)
        {

            C[i][j]=A[i][j]+B[i][j];

        }

        printf("\n");

    }



    // printing A + B matrix.
    printf("\n(A+B)= C matrix: ");

    for(i=0; i<n_rows; i++)
    {
        for(j=0; j<n_col; j++)
        {

            printf("%d  ", C[i][j]);



        }

        printf("\n");
        printf("\t\t ");

    }


    //substraction of A and B matrix.

    for(i=0; i<n_rows; i++)
    {
        for(j=0; j<n_col; j++)
        {

            C[i][j]=A[i][j]- B[i][j];

        }

        printf("\n");

    }



    // printing A - B matrix.
    printf("\n(A-B)= C matrix: ");

    for(i=0; i<n_rows; i++)
    {
        for(j=0; j<n_col; j++)
        {

            printf("%d  ", C[i][j]);

        }

        printf("\n");
        printf("\t\t ");

    }


    return 0;
}
