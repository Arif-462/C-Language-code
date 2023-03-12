#include<stdio.h>
int main()
{
    long long int k,n,w,ans=0;
    scanf("%lld %lld %lld",&k, &n, &w);

    for(int i=1; i<=w; i++)
    {
        ans=ans+k*i;
    }
    if(n>ans)
    {
        printf("0\n");
    }
    else
    {
         printf("%lld\n",ans-n);
    }

    return 0;
}
