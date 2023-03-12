#include<stdio.h>
int gcd(int n, int m)
{
    int ans=0 ;
    while(n!=m)
    {
        if(m>n)
        {
            m=m-n;
            ans=m;
        }
        else
        {
            n=n-m;
            ans=n;
        }
    }
    return ans;
}

int main()
{
    int n,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);

        int arr[n];
        for(int i=1; i<=n; i++)
        {
            scanf("%d",&arr[i]);
        }
        int count1=0;
        for(int i=1; i<=n; i++)
        {
            for(int j=i+1; j<=n; j++)
            {
                int res = gcd(arr[i], arr[j]);
                if(res==1)
                {
                    //printf("GCD = %d\n", res);
                    count1++;
                }
            }
        }

        printf("%d\n", count1 *2 );
    }

    return 0;
}
