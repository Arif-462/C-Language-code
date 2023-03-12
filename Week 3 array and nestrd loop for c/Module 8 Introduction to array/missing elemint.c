#include<stdio.h>
int main()
{
    int n,x;
    int ara[100];

    scanf("%d",&n);


    for(int i=1; i<=n; i++)
    {
        ara[i]=0;

    }
    for(int i=1; i<=n; i++)
    {
        printf("%d ",ara[i]);

    }

    for(int i=1; i<n; i++)
    {
        scanf("%d",&x);
        ara[x]=1;

    }

    for(int i=1; i<n; i++)
    {
        printf("%d ",ara[i]);


    }

    int count=0;
    for(int i=n; i>0; i--)
    {
        count ++;
        if(count==3)

        printf("\n3r = %d ",i);
    }

    return 0;
}
