#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int x, ld;
        scanf("%d", &x);
        int count=0;
        while(x>0)
        {
            ld = x % 10;
            x = x/10;
            if(ld==4)
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
