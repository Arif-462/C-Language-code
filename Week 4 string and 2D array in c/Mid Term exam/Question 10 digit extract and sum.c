#include<stdio.h>
int main()
{
    int n,num;

    scanf("%d",&n);
    int sum=0;

    while(n!=0)
    {
        num=n%10;
        n=n/10;
        sum=sum+num;

    }
    printf("\n%d\n\n",sum);


    return 0;
}
