
/*  Write a C program to take one positive integer N, the size of an array of unique values as input. Then take an
integer array of size N as input. After that take another integer target. You need to tell if you can make target by
adding any two different values from that array.
Hint: Use nested loop
Sample Input:                            Sample Output:
5                                           YES
2 4 3 6 8
7

Sample Input:                              Sample Output:
5                                             NO
2 4 3 1 8
8
 */

#include<stdio.h>
int main()
{

    int i,n,t;

    scanf("%d",&n);

    int arr[100];

    for(i=1; i<=n; i++)
    {
        scanf("%d",&arr[i]);
    }

    scanf("%d",&t);

    int sum=0;

    for(i=1; i<=n; i++)
    {
        if(arr[i]+arr[i+1] == t )
            sum=1;
    }
    if(sum==1)
    {
        printf("YES");

    }
    else
        printf("No");


    return 0;
}
