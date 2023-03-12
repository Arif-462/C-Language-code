/* Write a C program to take one positive integer N as input and print all divisors of N. Implement it using function.
Sample Input 1:                     Sample Output 1:
10                                      1 2 5 10
Sample Input 2:                     Sample Output 2:
18                                      1 2 3 6 9 18
Sample Input 3:                     Sample Output 3:
24                                      1 2 3 4 6 8 12 24
*/

#include<stdio.h>
int factorial(int x)
{
    for(int i=1; i<=x; i++)
    {
        if(x % i==0)
        {
           printf("%d ",i);
        }
    }
    return factorial;
}

int main()
{
    int n;
    scanf("%d",&n);
    factorial(n);



    return 0;
}
