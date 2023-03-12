#include<stdio.h>
int main()
{
    int i,j,k,n;

     printf("Enter numbers of stars:\n");

    scanf("%d",&n);

    for(i=n; i>0; i--)
    {

        for(j=0; j<i; j++)
        {
            printf(" ");
        }

        for(k=0; k<n; k++)
        {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}
