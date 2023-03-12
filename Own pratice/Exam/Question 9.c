/*9. Write a C program to print all the factors of a number taken as input.
Sample Input 1:
12
Sample Output 1:
The factors of 12 are: 1, 2, 3, 4, 6, 12.

Sample Input 2:
39
Sample Output 2:
The factors of 39 are: 1, 3, 13, 39.
  */

#include<stdio.h>
int main()
{
    int i,n ;

    scanf("%d",&n);
    printf("The factor of %d are: ",n);
    for (i=1; i<n; i++)
    {
        if(n % i == 0)
            printf("%d, ", i);  // factorial alada kara one by one.
    }
    printf("%d.\n",n);

    return 0;
}


/*
#include<stdio.h>
int main()
{
    int i,n;
    int fact=1;

    scanf("%d",&n);  // total factorial dekhano.

    for (i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);
    return 0;
}
*/
