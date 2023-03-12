#include <stdio.h>
int main()
{

    int n;
    int k=0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i, k = 0)
    {
        for (int j = 1; j <= n - i; ++j)
        {
            printf(" ");
        }
        while (k != 2 * i - 1)
        {
           if(i % 2 == 0)
           {
                printf("*");
           }
           else
           {
               printf("^");
           }
            k++;
        }
        printf("\n");
    }
    return 0;
}

/*
#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    for(int i=0; i<N; i++)
    {
        for(int j=N-1; j>=i ; j--)
        {
            printf("2");
        }

        for(int j=0; j<=i ; j++)
        {
            if(i % 2 !=0)
            {
                printf("*");
            }
            else
            {
                printf("^");
            }
        }

        for(int j=1; j<=i ; j++)
        {
            if(i % 2 !=0)
            {
                printf("*");
            }
            else
            {
                printf("^");
            }

        }
        printf("\n");
    }
    return 0;
}
*/
