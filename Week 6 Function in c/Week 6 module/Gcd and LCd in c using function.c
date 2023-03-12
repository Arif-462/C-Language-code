#include<stdio.h>


int gcd_number(int x,int y)
{

int ans;
    for(int i=x;i>=1; i--)
    {
         if(x%i==0 && y%i ==0 )
        {
            return i;
        }
    }

}


int main()
{
    int a,b,ans,lcm;

    scanf("%d %d",&a, &b);
    ans=gcd_number(a,b);
    lcm = a*b / ans;

    printf("The gcd of a and b = %d\n",ans);

    printf("The LCM of a and b = %d\n",lcm);


    return 0;

}
