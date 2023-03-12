/*
Explain Bubble Sorting. Suppose you are given an array of integers 12, 7, 9, 1, 3, 73, 11, 15, 62, 19, 4.
What will be the sequence of these integers if we run Bubble sort for only 5 iterations?                                 (10)
*/
#include<stdio.h>
int main()
{
    int ara[]= {12, 7, 9, 1, 3, 73, 11, 15, 62, 19, 4};

    int temp;


   for(int j=0; j<5; j++)
    {
        for(int i=0; i<11-1; i++)
        {
            if (ara[i]>ara[i+1])
            {
                temp=ara[i];
                ara[i]=ara[i+1];
                ara[i+1]=temp;
            }
        }


        printf("\n");

        for(int i=0; i<11; i++)
        {
            printf("%d ",ara[i]);
        }

    }
     printf("\n");


    return 0;
}
