#include<stdio.h>
int main()
{
    int i,j,N,M;

    int arr[101][101];


    scanf("%d %d",&N, &M);

    for(i=1; i<=N; i++)
    {
        for(j=1; j<=M; j++)
        {
            scanf("%d",&arr[i][j]);
        }

    }



    for(i=1; i<=N; i++)
    {
        for(j=1; j<=M; j++)
        {
             if(arr[i][j] == i && arr[i][j] == j )
             {
                 arr[i][j] = arr[i][j]+3;
             }

             else if(arr[i][j] == i  )
             {
                 arr[i][j] = arr[i][j]+ 2;
             }

             else if(arr[i][j] ==  j  )
             {
                 arr[i][j] = arr[i][j] + 1;
             }

        }

    }


    for(i=1; i<=N; i++)
    {
        for(j=1; j<=M; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }



    return 0;
}
