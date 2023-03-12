#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        int res = b + c*2;
        if(a>=res)
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
