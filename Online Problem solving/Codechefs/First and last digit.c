#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int ld, n, rem;
        scanf("%d", &n);
        ld=n % 10;
        while(n>0)
        {
            rem = n%10;
            n=n/10;
        }
        printf("%d\n", ld+rem);
    }
    return 0;
}
