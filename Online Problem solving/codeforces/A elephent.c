#include<stdio.h>
int main()
{
    int result,n;

    scanf("%d",&n);

    if(n%5==0)  // result=(n/5)+ (n%5!=0)
    {
        result= n/5;

    }


    else
    {
        result=n/5+1;

    }
    printf("%d",result);

    return 0;
}
