#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        if(x*2 == y*5)
        {
            printf("Either\n");
        }
        else if(x*2>y*5)
        {
            printf("Chocolate\n");
        }
        else
        {
            printf("Candy\n");
        }
    }
    return 0;
}
