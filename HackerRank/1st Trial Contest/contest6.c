/* Problem Statement

You will be given three non-negative integers A,B and C. You need to tell if these integers form an equilateral triangle
(A triangle whose three sides are the same and each side contains a positive value). If the answer is yes, print "Yes" otherwise "No".
Input Format

Input will contain A,B and C.
Constraints

0 <= A,B,C <= 100
Output Format

Output "Yes" or "No" without quotation.
Sample Input 0

2 4 2
Sample Output 0

No
Sample Input 1

3 3 3
Sample Output 1

Yes */

#include <stdio.h>
int main()
{
    int A,B,C;
    scanf("%d%d%d",&A,&B,&C);

    if //(A!=0&&B!=0 && C!=0 && A==B  && B==C )// this is right
        ( A>0&& A==B  && B==C)//this is also right
    {
        printf("Yes");
    }
    else
        printf("No");

    return 0;
}
