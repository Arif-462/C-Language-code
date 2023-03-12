/* Problem Statement

In planet-X, The North is the coldest place on this planet . For keeping themselves warm, White walkers from the North like candies very much.

There are N White walkers in the North .The White walker with number K (1 ≤ K ≤ N) will be happy if he receives at least double of A[k] candies. There are total C candies in all in the North Candy Bank.

The North Candy Bank staff is interested in knowing whether it is possible to make all the N White walkers happy by giving each White walker at least as many candies as they wants, that is, the Kth White walker should receive at least double of A[k] candies. Each candy can be given to only one White walker. Print Yes if it is possible and No otherwise.

Input Format

The first line of the input file contains an integer T, the number of test cases.
Each test case consists of exactly 2 lines. The first line of each test case contains two space separated integers N and C, the total number of White walkers and the total number of candies in the North Candy Bank.
The second line contains N space separated integers A[1], A[2], ..., A[N].
Constraints

0 < T <= 1000
1 <= N <= 100
1 <= C <= 10^9
1 <= A[K] <= 10000 where 1 <= K <= N
Output Format

Output "Yes" or "No" without the quotation.
Sample Input 0

2
2 3
1 1
3 17
4 2 2
Sample Output 0

No
Yes
*/

#include<stdio.h>
int main()
{
    int i,t,n,j;
    long long int c;

    int a[10005];

    scanf("%d",&t);

    for(i=0; i<t; i++)
    {
        scanf("%d %lld",&n,&c);

        for(j=0; j<n; j++)
        {
            scanf("%d",&a[j]);

        }

        int count=0;
        int s = 0;


        for(j=0; j<n; j++)
        {

             s = s + a[j];

        }

        //printf("total candi = %d\n",s);

        for(j=0; j<n; j++)
        {


             if(s*2 <= c)
            {
                count++;
            }
        }

        if(count != 0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }

    }



    return 0;
}

