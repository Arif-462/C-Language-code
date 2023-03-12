#include<stdio.h>
int main()
{
    int n, s;
    scanf("%d %d",&n , &s);
    int sum=0;
    if(s%2==0 && n%2==0)
    {
        sum = s-n;
        sum = sum/2;
    }
    printf("%d\n", sum);
    return 0;
}
