/* Problem Statement

In the ICC Men's T20 World Cup Final of 2022 , the match is held between England and Pakistan. Before starting a cricket match a toss happens between two teams. In this final match there happened N tosses. A toss will result in a H(Head) or T(Tail). Now the winner of the toss is determined in the following way for this match-

If the count of H(Head) is greater than the count of T(Taill) , the winner of this toss is England.
If the count of T(Taill) is greater than the count of H(Head) , the winner of this toss is Pakistan.
Now you need to determine the toss winner.

Note - It is guaranteed that the count of H(Head) and T(Taill) is always different.

Input Format

The first line will contain T, the number of test cases.
The first line of each test case contains a single positive integer N (length of the string).
The second line will contain a string S of size N,consisting only H and T.
Constraints

0 < T <= 10
1<= N <=20
Output Format

Print England if the winner of the toss is England Otherwise print Pakistan
Sample Input 0

2
3
HHT
6
TTHHTT
Sample Output 0

England
Pakistan
*/

#include<stdio.h>
int main()
{
    char s[50];


    int i,j,t,n;
    scanf("%d",&t);

    for(i=0; i<t; i++)
    {
        scanf("%d ",&n);

        for(j=0; j<n; j++)
        {
            scanf("%c",&s[j]);

        }
        int eng=0;
        int pak=0;

        for(j=0; j<n; j++)
        {
            if(s[j] == 'H')
            {
                eng++;
            }

            else
            {
                pak++;
            }

        }

        if(eng != pak)
        {
            if(eng>pak)
            {
                printf("England\n");
            }

            else

            {
                printf("Pakistan\n");
            }
        }
    }



    return 0;
}
