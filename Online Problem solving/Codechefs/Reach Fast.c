#include<stdio.h>
int main()
{
    int t, a, b, k;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d %d", &a, &b, &k);

        if(a < b )
        {
           int temp = a;
           a = b;
           b = temp;
        }

        int res = a-b;
        int ans = res / k;

        if(res % k == 0)
        {
            printf("%d\n", ans);
        }
        else
        {
            printf("%d\n", ans + 1);
        }

    }

    return 0;
}
