#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        if(i%3!=0 && i%5!=0)
        {
            printf("%d\n",i);
        }
        if(i%3==0 && i%5!=0)
        {
            printf("Fizz\n");
        }
        if(i%5==0 && i%3!=0)
        {
            printf("Buzz\n");
        }
        if(i%3==0 && i%5==0)
        {
            printf("FizzBuzz\n");
        }

    }
    return 0;
}
