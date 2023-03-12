#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        int ans = x*5 + y*7;
        printf("%d\n", ans);
    }
    return 0;
}
