#include<stdio.h>
int check_saven(int x);
int lsd_prime(int x);
int digit_sum(int x);
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",n);

    if(check_saven(n)==1 && lsd_prime(n)==1 && digit_sum(n)>10 )
    {
        printf("Arif is my best freind\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}

int check_saven(int x)
{
    while(x>0)
        if(x % 10==7)
        {
            return 1;
        }
        else
        {
            x = x/10;
        }
    return 0;
}
int lsd_prime(int x)
{
    int lsd = x%10;
    if(lsd==2||lsd==3||lsd==5||lsd==7)
    {
        return 1;
    }
    else
    {
        return 0;
    }


}
int digit_sum(int x)
{
    int sum=0;
    while(x>0)
    {
        sum = sum + x % 10;
        x=x/10;
    }
    return sum;
}
