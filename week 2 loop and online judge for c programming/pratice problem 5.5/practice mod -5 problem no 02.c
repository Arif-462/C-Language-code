/*  Write a C program to take one integer N as input and print from 1 to N.

Sample Input:                     Sample Output:
    5                                1 2 3 4 5
    -5                               1 0 -1 -2 -3 -4 -5
*/



#include<stdio.h>

int main()
{

    int n,i;

    scanf("%d",&n);

    if(i<n)

    {
        for(i=1; i<=n; i++)

            printf("%d ",i);

    }
    else
    {
        for(i=1; i>=n; i--)
            printf("%d ",i);
    }

    return 0;
}


