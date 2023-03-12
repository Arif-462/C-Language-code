/* Write a C program to take one positive integer N, the size of an array as input. Then take an integer array of size
N as input and tell if the array contains only one unique value or not. Print “YES” or “NO”.

Sample Input 1:                     Sample Output 1:
5                                       NO
2 4 2 2 4

Sample Input 2:                  Sample Output 2:
5                                       YES
4 4 4 4 4
*/


#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);

    int arr[100];
    for(i=1; i<=n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(i=1; i<n; i++)
    {

        if(arr[i]!=arr[i+1])
        {
            count=1;
        }

    }
    if(count==1)
    {
        printf("NO");
    }
    else
        printf("YES");

    return 0;

}
