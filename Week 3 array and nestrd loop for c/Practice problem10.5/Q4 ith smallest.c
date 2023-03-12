/* Write a C program to take one positive integer N, the size of an array as input. Then take a positive integer array
of size N . And next line will contain k . Now find the k-th smallest element from the array.

Sample Input:                                               Sample Output:
6                                                               6
6 25 1 4 9 17
3
Explanation – For the above test case k=3 means you need to find the 3rd smallest element from the array
*/

#include<stdio.h>
int main()
{
    int n,i,j,temp,k;
    int ara[100];

    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);

    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(ara[i]>ara[j])
            {
                temp=ara[i];
                ara[i]=ara[j];
                ara[j]=temp;
            }
        }

    }

    scanf("%d",&k);

    for(i=0; i<k; i++)
    {
        ara[k]=ara[i];

    }

    printf("%d",ara[i]);


    return 0;
}

