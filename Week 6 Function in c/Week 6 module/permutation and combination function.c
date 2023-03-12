#include<stdio.h>
#include<math.h>

int fact_function(int n);

int main()
{
    int n,r;
    scanf("%d %d",&n , &r);
    int permutation;
    int combination;

 permutation = fact_function(n)/fact_function(n-r);
 combination = fact_function(n)/(fact_function(n-r)*fact_function(r));


    printf("nPr of %d and %d is = %d\n",n, r,permutation);
    printf("nCr of %d and %d is = %d\n",n, r,combination);

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
