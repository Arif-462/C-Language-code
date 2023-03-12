#include<stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);

    //loop starts 1
    for(i=1; i<=n; i++)
    {
        for(k=0; k<=n-i ; k++)
        {
            printf(" ");

        }

            for(j=1; j<=2*i-1; j++)
            {
                printf("*");
            }


        printf("\n");

    }


    //Loop End 1


    //loop starts 2

    for(i=n; i>1; i--)
    {
        for(k=0; k<=n-i ; k++)
        {
            printf(" ");

        }

            for(j=1; j<=2*i-1; j++)
            {
                printf("*");
            }


        printf("\n");

    }

    //Loop End 2

    //loop starts 3

    for(i=1; i<=n; i++)
    {
        for(k=0; k<=n-i ; k++)
        {
            printf(" ");

        }

            for(j=1; j<=2*i-1; j++)
            {
                printf("*");
            }


        printf("\n");

    }

    //Loop End 3
    return 0;

}

