#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter your choosen number:\n");

    scanf("%d",&n);

    if(n >= 0)
    {
        for(i=n; i>=-n; i--)
        {
            printf("%d ",i);

        }

    }


    if(n < 0)
    {
        for(i=n; i<=-n; i++)
        {
            printf("%d ",i);

        }
    }

    return 0;
}
