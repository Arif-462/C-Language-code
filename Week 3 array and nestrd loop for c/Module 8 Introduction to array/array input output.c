#include<stdio.h>
int main()
{   int n=5;
    int ara[n];
    int i;

    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=1; i<=n; i++)
    {
        printf("%d th position value = %d\n",i,ara[i]);
    }


    return 0;
}
