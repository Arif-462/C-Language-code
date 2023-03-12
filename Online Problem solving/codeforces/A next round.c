#include<stdio.h>
int main()
{
    int i,n,k;
    int ara[55];

    scanf("%d %d",&n,&k);

    for(i=1; i<=n; i++)
    {
        scanf("%d",&ara[i]);

    }
    int result=0;
    for(i=1; i<=n; i++)
    {
        if(ara[i]>=ara[k] && ara[i]>0)
            result++ ;

    }
    printf("%d",result);

    return 0;
}
