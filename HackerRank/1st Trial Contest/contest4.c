/* Problem Statement

Rahim has X% share, Karim has Y% share and Habib has (X*Y)% share of the company Zeta. Can you tell the amount of share of Habib?

Input Format

Input will consist of two non-negative integers X and Y
Constraints

0 <= X <= 10
0 <= Y <= 10
Output Format

Output the amount of share of Habib and put a % sign after it
Sample Input 0

5% 4%
Sample Output 0

20%  */

#include <stdio.h>
int main()
{
    int X,Y;
    char Z;

    scanf("%d%c %d%c",&X,&Z,&Y,&Z);


    printf("%d%c",X*Y,Z);


    return 0;
}
