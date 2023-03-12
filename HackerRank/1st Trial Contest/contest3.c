/*  Problem Statement

Motu has N bananas and Patlu has M bananas. Can you tell how many bananas both of them have?

Input Format

You will given two non-negative integers N and M
Constraints

0 <= N <= 100
0 <= M <= 100
Output Format

Output a single line, the total number of bananas both of them have
Sample Input 0

10 20
Sample Output 0

30 */

#include<stdio.h>
int main()
{
    int N,M;

    scanf("%d %d",&N,&M);
    printf("%d",N+M);

    return 0;
}
