#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);

    while(n!=0)
    {
        printf("%d \n",n%10);
        n = n / 10;
    }
    return 0;
}
