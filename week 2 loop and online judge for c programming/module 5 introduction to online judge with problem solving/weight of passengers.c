#include<stdio.h>
int main()
{
    int n,i,w;
    int sum=0;
    int count=0;

    printf("Enter the numbers of passengets: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        scanf("%d",&w);
        sum =sum+w;
        count++;
    }
    printf("Toral %d passengers waeight are: %d.\n",n,sum);

           printf("total= %d",count);


}
