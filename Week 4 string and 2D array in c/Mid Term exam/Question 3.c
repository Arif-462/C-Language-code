/*
Suppose you want to declare an array of size 15 and the elements of the array will be in a geometric progression,
the first one starting with 1 and the common ratio being 2. For example, the first few elements of that array
will be 1, 2, 4, 8, 16 , … and so on. Write a for loop to initialize the array with the  required progression.
                                                                                                                    (10)
*/


#include<stdio.h>
int main()
{
    int ara[15];

    int count=1;

    for( int i=1; i<=15; i++)
    {

        ara[i]=count;

        printf("%d, ",ara[i]);

        count=count*2;
    }

    printf("\n");


    return 0;

}
