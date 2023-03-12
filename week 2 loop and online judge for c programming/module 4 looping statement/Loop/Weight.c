#include<stdio.h>
int main()
{

    int i,w,n;
    int sum = 0;

    printf("Enter the number of passengers: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {

        scanf("%d",&w);

        sum = sum + w;

    }

    printf("\nTotal weight of %d passengers = %d",n,sum);



    return 0;
}
