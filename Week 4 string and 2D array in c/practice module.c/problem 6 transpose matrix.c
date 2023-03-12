#include<stdio.h>
int main()
{
    int i,j;

    int a[10][10];
    //int b[10][10];
    //int sum[10][10];


    int N,M;

    scanf("%d %d",&N,&M);

    // first matrix

    printf("\n");
    for(int i=0; i<N;i++)
    {
        for(int j=0; j<M; j++)
        {
            scanf("%d",&a[i][j]);

        }

    }



    printf("\n\Transepose matrix.\n");
    for(int i=0; i<N;i++)
    {
        for(int j=0; j<M; j++)
        {
            printf("%d ",a[j][i]);

        }
        printf("\n");

    }




    return 0;


}
