/*#include<stdio.h>
int main()
{
    int i,j;

    i=0;

    while(i<7)
    {
        //print star 5 times.

        j=0;
        while(j<20)
        {
          printf("*");
          j++ ;
        }
        printf("\n");
        i++;

    }
    return 0;
}*/

#include<stdio.h>
int main()
{
    int i,j;

    for(i=1; i<=5; i++)
    {
       for(j=1; j<=8; j++)
       {
           printf("*");
       }
       printf("\n");

    }
    return 0;

}
