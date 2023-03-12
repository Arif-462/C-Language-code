#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,n,m;
    scanf("%lld %lld %lld",&n,&m,&a);
    long long int s=n/a;
    if(n%a!=0)
    {
        s++;
    }
    long long int k=m/a;
    if(m%a!=0)
    {
        k++;
    }
    long long int ans = s*k;
    printf("%lld\n",ans);
    return 0;
}
