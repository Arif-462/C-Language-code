#include<stdio.h>
int main()
{
    int n;

    printf("Enter any year: ");

    scanf("%d",&n);

    //leap year check

    if(n % 4 == 0 && n % 100 != 0 || n % 400 == 0)

    {
        printf("\nYES, this year leapyear\n");
    }

    else
    {
        printf("\nNO, this year not leapyear\n");
    }

    return 0;
}
