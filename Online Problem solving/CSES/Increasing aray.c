#include<stdio.h>
int main()
{
    long long int n,i;
   long long int ara[200005];
   long long int moves=0;

    scanf("%lld",&n);

    for(i=0; i<n; i++)
    {
        scanf("%lld",&ara[i]);
    }
    for(i=1; i<n; i++)
    {
        if(ara[i]<ara[i-1])
        {
            moves+=ara[i-1]-ara[i];
            ara[i]=ara[i-1];
        }
    }
    printf("%lld",moves);


    return 0;
}
