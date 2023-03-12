/*Problem Statement

You are given N player's runs of ICC Men's T20 World Cup of 2022. Now you need to tell how many of their runs are a perfect square.

Note - A perfect square is a number that can be expressed as the product of an integer by itself.

Input Format

The first line will contain T, the number of test cases.
The first line of each test case contains a single positive integer N (number of players).
The second line will contain N positive integers A1,A2,A3,A4…..An (run of the players).
Constraints

0 < T <= 100
1 <= N <= 100
0 <= A[i] <= 100
Output Format

Print a single integer, count of the perfect square runs. If there doesn't exist any perfect square runs print -1. Don't forget to print a new line after printing the value.
Sample Input 0

5
5
10 17 9 1 22
3
13 3 17
7
12 25 78 64 36 50 1
1
7
5
5 4 3 2 1
Sample Output 0

2
-1
4
-1
2
*/

#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n,t;
    int arr[105];

    scanf("%d",&t);

    for(i=0; i<t; i++)
    {
        scanf("%d",&n);
        for(j=0; j<n; j++)
        {
            scanf("%d",&arr[j]);
        }
        int count=0;

        for(j=0; j<n; j++)
        {
            int p=sqrt(arr[j]);

            if(arr[j]== p*p)
            {
                count++;
            }



        }

        if(count==0)
        {
            printf("-1\n");
        }

        else
        {
            printf("%d\n",count);
        }


    }



    return 0;
}

