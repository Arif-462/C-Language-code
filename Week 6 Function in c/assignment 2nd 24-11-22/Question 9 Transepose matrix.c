#include<stdio.h>
int get_matrix_elements(int ara[10][10])
{
     for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf("%d",&ara[i][j]);
        }
    }

}

int display_transpose_matrix(int ara[10][10])
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d ",ara[j][i]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}

int main()
{
    int ara[10][10];
    printf("Enter Matrix Elements:\n");
    get_matrix_elements(ara);

    printf("\nTranspose Matrix:\n");
    display_transpose_matrix(ara);

    return 0;
}
