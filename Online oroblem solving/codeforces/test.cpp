#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    int s[100000];
    for(int i=0; i<n; i++)
    {
        scanf("%lld",&s[i]);
    }
    int count=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(s[i]==s[j])
            {
                count++;
            }
        }
    }
    printf("%d\n",count);
    return 0;
}
