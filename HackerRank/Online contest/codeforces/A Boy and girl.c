#include<stdio.h>
int main()
{
    long long int k,n,w,ans=0;
    scanf("%lld %lld %lld",&k, &n, &w);

    for(int i=1; i<=w; i++)
    {
        ans=ans+k*i;
        
    }
    printf("%lld\n",ans);
    return 0;
}
