#include<stdio.h>
int main()
{
    int row=8, col=8;
    int chess[row][col];
    int i,j;

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {

            chess[i][j]=0;
        }
    }

    int input_num;
    scanf("\n%d",&input_num);


    while(input_num--)
    {
        int r,c;
        scanf("%d %d",&r, &c);
        chess[r][c]= 1;
    }



    for(i=0; i<row; i++)
    {
        int count = 0 ;

        for(j=0; j < col; j++)
        {
            if(chess[i][j]==1)
                count++ ;
        }

        if(count > 1)
        {
            for(j = 0; j < col; j++)
            {
                chess[i][j]=0;
            }
        }


    }




    int sve = 0 ;
    for(i=0; i<row; i++)
    {


        for(j=0; j < col; j++)
        {
            if(chess[i][j]==1)
                sve++ ;
        }

    }
    printf("Safe rooks - %d\n",sve);

    for(i=0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            if(chess[i][j] == 1)

                printf("%d %d\n",i,j);
        }
        printf("\n");



    }



    return 0;
}
