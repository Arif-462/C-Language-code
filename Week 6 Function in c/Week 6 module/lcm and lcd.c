#include<stdio.h>
int lcm_function(int a,int b);

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    int lcm = lcm_function(a,b);

    printf("LCM of two numbers is %d", lcm);
    return 0;
}


int lcm_function(int a,int b)
{
    int  max, lcm=0;

    if(a > b)
        max = a;
    else
        max = b;

    while(1)
    {
        if(max%a == 0 && max%b == 0)
        {
            lcm = max;
            break;
        }

        max = max*2;
    }
    return max;

}




