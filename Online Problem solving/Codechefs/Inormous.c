#include<stdio.h>
int main()
{
    int n, k, a;
    scanf("%d %d", &n, &k);
    int count=0;
    while(n--)
    {
        scanf("%d", &a);
        if(a % k == 0)
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
