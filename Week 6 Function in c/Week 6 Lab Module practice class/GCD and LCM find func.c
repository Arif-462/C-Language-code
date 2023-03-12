#include<stdio.h>
int gcd(int x, int y)
{
    for(int i=x; i>=1; i--)
    {
       if(x%i==0 && y%i==0)
           {
                return i;
           }
    }

}
int lcm(int x, int y)
{
    for(int i=x;i<(x*y) ;i++)//i<(x*y) na dilew hobe
    {
        if(i%x==0 && i%y==0)
        {
            return i;
        }
    }
}
int main()
{
    int a, b;
    scanf("%d %d",&a, &b);
    int ans = gcd(a, b);
    int ans2=lcm(a, b);
    printf("GCD is = %d\n",ans);
    printf("LCM is = %d\n",ans2);
    return 0;
}
