/*Problem Statement

Mustafizur Rahman is a left-arm pace bowler from Bangladesh who played in the ICC Men's T20 World Cup of 2022. In a match, he bowled so many good overs. Now ICC wants to find out whether the over bowl by Mustafizur is a maiden over or not. ICC needs your help as a programmer.

Note - An over is called a maiden over when the bowler does not concede a run in all six balls bowled in that over.

Input Format

The first line will contain T, the number of overs.
The second line will contain the runs of 6 bowls in a over.
Constraints

0 < T <= 20
0 <= Runs <= 6
Output Format

For each test case print "YES" (without quotes) if the over is maiden over, or "NO" (without quotes) otherwise.
Sample Input 0

2
1 0 4 6 6 2
0 0 0 0 0 0
Sample Output 0

NO
YES

*/

#include<stdio.h>
int main()
{
    int i,j,r=6;

    int t;
    int a[10];

    scanf("%d",&t);



    for(i=0; i<t; i++)
    {

        for(j=0; j<r; j++)
        {
            scanf("%d",&a[j]);

        }

        int count=0;

        for(j=0; j<r; j++)
        {

            if(a[j] != 0)
            {
                count++;
            }

        }


        if(count==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }


    return 0;
}
