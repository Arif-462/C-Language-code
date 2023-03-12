#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int x, n;
        scanf("%d %d", &x, &n);
        printf("%d\n", (x/10)*n);
    }
    return 0;
}
