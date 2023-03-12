#include<stdio.h>

int max_of_three(int x,int y, int z)
{
    int max;
    if(x>y && x>z)
        max=x;
    else if(y>x && y>z)
        max=y;
    else
        max=z;

    return max;
}
int main()
{
    int a,b,c,n;
    printf("Enter loop number:\n");

    scanf("%d",&n);
    printf("Enter thre integer numbers:\n");

    for(int i=1; i<n; i++)
    {
       scanf("%d %d %d",&a, &b, &c);

    int m = max_of_three(a,b,c);

    printf("The maximum value of three numbers is = %d\n",m);

    }

    return 0;
}
