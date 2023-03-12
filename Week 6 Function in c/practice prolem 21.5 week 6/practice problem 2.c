/* Print the following pattern (Implement it using function)
For example n = 4

Sample Input : Sample Output
*/

#include<stdio.h>

int print_pattern(int n)
{
    for(int i=n ;i>=1;i--)
    {
        for(int j=1 ;j<=n-i; j++)
        {
            printf(" ",j);
        }

        for(int j=i ; j<=(i*2)-1 ; j++)
        {
           printf("*");
        }

        for(int j=0; j<i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

}

int main()
{
    int n;
    scanf("%d",&n);
    print_pattern(n);

    return 0;
}
