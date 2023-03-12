#include<stdio.h>
int main()
{
    long long int n, k, c,cout=0;

    scanf("%lld %lld",&n,&k);



    if(n%2 == 0)
    {
        c = n / 2;
    }

    else
    {
        c = (n + 1) / 2;
    }

    if(k <= c)
    {
        cout = (k * 2) - 1;
    }

    else
    {
        cout = (k - c) * 2;
    }



    printf("%lld",cout);


}
