/* Write a C program to take one positive integer N, the size of an array as input. Then take a positive integer array
of size N . Now count the number of prime numbers from this array and print them.
In the sample output the first line will contain count of prime numbers and second line will contain the prime
numbers.
Sample Input 1:                              Sample Output 1:
5                                                    2
2 10 4 21 97                                         2 97
Sample Input 2:                              Sample Output 2:
6                                                      3
5 12 16 19 23 9                                        5 19 23

Hints – Nested loop
  */

#include<stdio.h>
int main()
{
    int n,i,j;
    int ara[100];
    int count=0;

    scanf("%d",&n);

    for(i=2; i<n; i++)
    {
        scanf("%d",&ara[i]);


            for(j=2; j<n; j++)
            {

                if(ara[i] % j == 0)
                {
                    count=1 ;

                }

            }
            if (count==0)

                printf("%d  ",ara[i]);

    }

    return 0;
}
