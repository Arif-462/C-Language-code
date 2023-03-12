#include<stdio.h>
int main()
{
    int i,n,x ;
    int ara[200000];

    scanf("%d",&n);


    for(i=1; i<=n; i++)
    {
        ara[i]=0;
    }
    for(i=1; i<n; i++)
    {
        scanf("%d",&x);
        ara[x] = 1 ;
    }
    for(i=1; i<=n; i++)
    {
        if(ara[i]==0)
        {
            printf("%d\n",i);
            break ;
        }
    }
    return 0;
}
