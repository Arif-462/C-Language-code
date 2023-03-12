#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int x;
        int ans = 0;
        scanf("%d", &x);
        if(x>100)
        {
            ans = x - 10;
        }
        else
        {
            ans = x;
        }
        printf("%d\n", ans);
    }
    return 0;
}
