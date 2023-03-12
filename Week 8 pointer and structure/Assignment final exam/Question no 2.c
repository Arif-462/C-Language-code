#include<stdio.h>
int main()
{

    int first = 0;
    int second = 1;
    int count = 0;

    int n, fibo;
    scanf("%d",&n);


    while(count<n)
    {
        if(count<=1)
        {
            fibo=count;
        }
        else
        {
            fibo=first+second;
            first=second;
            second=fibo;
        }
        printf("%d ",fibo);
        count++;
    }
    return 0;
}
