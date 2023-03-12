/* Problem Statement

The ICC Men's T20 World Cup Final of 2022 has been finished. Where a team is formed with 11 players. Now you need to tell the closest run to the century of a player in a team.

Note - A century is a score of 100 or more runs in a single innings by a batsman.

Input Format

The first line will contain T, number of test cases.
Where in each test case contains a single positive integer N (number of players)
The second line will contain n distinct integers A1,A2,A3,A4…..An (run of the players)
Constraints

1 <= T <= 20
2 <= N <= 11
0 <= A[i] < 100
Output Format

Print a single integer which is closest to the century.Don't forget to print a newline.
Sample Input 0

2
5
20 50 65 75 95
2
95 99
Sample Output 0

95
99
Sample Input 1

1
5
10 20 40 30 80
Sample Output 1

80
*/


#include<stdio.h>
int main()
{
    int n,i,j,t;
    int arr[105];


    scanf("%d",&t);

    for(i=0; i<t; i++)
    {
        scanf("%d",&n);

        for(j = 0; j<n; j++)
        {
            scanf("%d",&arr[j]);
        }


        int max = arr[0];

        for(j= 0; j<n; j++)
        {
            if(arr[j]>max)
            {
                max = arr[j];
            }
        }

        printf("%d\n",max);

    }

    return 0;
}
