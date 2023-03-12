/*

Write a C program to take one positive integer N, the size of an array as input. Then take an integer array of size
N as input and show output in reverse order.

Sample Input:                           Sample Output:
5                                       5 10 3 20 1
1 20 3 10 5

*/

#include<stdio.h>
int main()
{
    int n,i;
    int arr[100];


    scanf("%d", &n);

    //int arr[i]=0;


    for(i=1; i<=n; i++)
    {
        scanf("%d",&arr[i]);

    }
     for(i=n; i>=1; i--)
    {
        printf("%d ",arr[i]);

    }
    printf("\n");



}
