#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        int res = (x*107)/100;
        if(y <= res)
        {
            printf("YES\n");
        }
        else

        {
            printf("NO\n");
        }
    }
    return 0;
}
