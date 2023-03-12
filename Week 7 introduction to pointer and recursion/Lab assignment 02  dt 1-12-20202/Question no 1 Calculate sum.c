#include <stdio.h>
void display_sum(int x);
int main(void)
{
    int n;
    scanf("%d",&n);
    display_sum(n);
    return 0;
}
void display_sum(int x)
{
    int sum = 0, count_plus = 0, count_minus = 0;
    for(int i = 1; i <= x; i++)
    {
        if(count_plus == 3)
        {
            sum = sum - i;
            count_minus++;
            if(count_minus == 3)
            {
                count_plus = 0;
                count_minus = 0;
            }
        }
        else
        {
            sum = sum + i;
            count_plus ++;
        }
    }
    printf("%d", sum);
}



/*
int main()
{
    int n;
    scanf("%d",&n);
    int sum = 0, count_plus = 0, count_minus = 0;
    for(int i = 1; i <= n; i++)
    {
        if(count_plus == 3)
        {
            sum = sum - i;
            count_minus++;
            if(count_minus == 3)
            {
                count_plus = 0;
                count_minus = 0;
            }
        }
        else
        {
            sum = sum + i;
            count_plus ++;
        }
    }
    printf("%d", sum);
    return 0;
}
*/
