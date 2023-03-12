#include<stdio.h>
#include<math.h>

int fact_function(int n);

int main()
{
    int n;
    scanf("%d",&n);
    int ans = fact_function(n);

    printf("Factorial of %d is = %d\n",n,ans);

    return 0;
}

int fact_function(int n )
{
    int res = 1;
    for(int i=1; i<=n; i++)
    {
        res= res*i ;
    }
    return res;
}

