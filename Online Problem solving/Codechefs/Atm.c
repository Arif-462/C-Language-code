#include<stdio.h>
int main()
{
    float y,ans;
    int x;
    scanf("%d %f", &x, &y);
    if(x % 5 == 0 && x <= y - 0.50)
    {
        ans = y-(float)x;
        ans = ans - 0.50;
    }
    else
    {
        ans = y;
    }
    printf("%0.2f\n", ans);

    return 0;
}
