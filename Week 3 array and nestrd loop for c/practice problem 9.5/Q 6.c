/* Write a C program to take a non-negative integer N and print the pattern as shown below
For N=5, the pattern should be
*
**
***
****
*****
Sample Input:                                                   Sample Output:
4                                                                   *
                                                                    **
                                 s                                  ***
                                                                    ****

  */

#include<stdio.h>
int main()
{
    int i,j,n;

    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

}
