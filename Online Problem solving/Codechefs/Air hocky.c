#include<stdio.h>
int main()
{
    int t,a,b;
    int temp,result;
    scanf("%d",&t);

    for(int i=1; i<=t; i++)
    {
        scanf("%d %d",&a,&b);

        if(a<b)
        {
            temp=a;
            a=b;
            b=temp;
            result=7-a;
        }
        else
        {
            result=7-a;

        }
        printf("%d\n",result);
    }

    return 0;
}
