#include<stdio.h>
int main()
{
    int i,j,n ;
    printf("Enter star number: ");
    scanf("%d",&n);


    //printf("*\n");

    for(j=1; j<2; j++)
       {
           printf("*\n");
       }

    for(i=1; i<=n; i++)
    {
       for(j=1; j<=i; j++)
       {
           printf(" ");
          // printf("*");
       }
       printf("*\n");


        for(j=1; j<=n; j++)
       {
           printf("*\n");
          // printf("*");
       }


    }
    return 0;

}
