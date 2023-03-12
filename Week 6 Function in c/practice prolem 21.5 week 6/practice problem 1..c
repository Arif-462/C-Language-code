/* You are given an integer n or –n .If you are given n , print n to –n , if you are given –n, print –n to n.
See the sample output for more clarification. Implement it using function.
Sample Input :                                                               Sample Output :
5                                                                         5 4 3 2 1 0 -1 -2 -3 -4 -5
-4                                                                          -4 -3 -2 -1 0 1 2 3 4
*/

#include<stdio.h>

int int_value_print(int x)
{
    int i;

    if(x>0)
    {
        for(i=x; i>= -x; i--)
        {
            printf("%d ",i);
        }
    }
    else
    {
        for(i=x; i<=-x ; i++)
        {
            printf("%d ",i);
        }
    }


}

int main()
{
    int n;
    scanf("%d",&n);

    int_value_print(n);

    return 0;
}
