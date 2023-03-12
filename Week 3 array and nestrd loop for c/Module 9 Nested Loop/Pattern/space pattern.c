#include<stdio.h>
int main()
{
    int input,col,row,spac;

    scanf("%d",&input);

    for(row=1; row<=input; row++)
    {
        for(spac=1; spac<=input-row; spac++)
        {
              printf(" ",spac);
        }

       // printf("\n");

        for(col=1; col<=row; col++)
        {
            printf("%d",col);
        }
        printf("\n");


    }


    for(row=input; row>=1; row--)
    {
        for(spac=1; spac<=input-row; spac++)
        {
              printf(" ",spac);
        }

       // printf("\n");

        for(col=1; col<=row; col++)
        {
            printf("%d",col);
        }
        printf("\n");


    }



}
