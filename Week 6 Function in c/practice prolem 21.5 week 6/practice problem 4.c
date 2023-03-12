/* Write a C program to take one positive integer N as input and print all even numbers from 2 to N.
Implement it using function.
Sample Input 1:                         Sample Output 1:
10                                          2 4 6 8 10
Sample Input 2:                         Sample Output 2:
7                                           2 4 6
*/

#include<stdio.h>

int even_numbers(int x)
{
    for(int i=2; i<=x; i+=2)
        printf("%d ",i);
}

int main()
{
    int n;
    scanf("%d",&n);
    even_numbers(n);

    return 0;
}
