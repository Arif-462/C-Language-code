#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;

    char n;
    int ans;
    printf("Enter arithmetic oparetor for a and b:\n");

    scanf("%c",&n);

    //printf("%c\n",n);

    printf("Enter number for a and b:\n");


    scanf("%d %d",&a, &b);


    if(n == '/')
    {
        ans = a / b;
    }


    else if(n == '-')
    {
        ans = a - b;
    }


    else if(n == '*')
    {
        ans = a * b;
    }


    else
    {
        ans = a + b;
    }


    printf("Your answer = %d\n",ans);



    return 0;
}
