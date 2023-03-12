#include<stdio.h>
int main()
{
    int i,j,r;
    int board[4][4];

    scanf("%d",&r);

    int x;
    int y;

    for(i=1; i<=r; i++)
    {
        scanf("%d %d",&x,&y);
        board[x][y]=1;
    }


    printf("\n");

    for(i=1; i<=3; i++)
    {
        for(j=1; j<=3; j++)
        {
            if(board[i][j]!=1)
            {
                printf("%d %d\n",i,j);
            }

        }

        //printf("\n");
    }


    return 0;
}
