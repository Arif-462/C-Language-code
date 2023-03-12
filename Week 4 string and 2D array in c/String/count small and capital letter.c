#include<stdio.h>
int main()
{
    char str[100];

    printf("Enter your word: ");
    gets(str);

    int i,capital,small,digit;

    i=capital=small=digit=0;

    while(str[i]!='\0')
    {
        if(str[i]>=65 && str[i]<=90)
        {
            capital++;
        }
        else if(str[i]>=97 && str[i]<=122)
        {
            small++;

        }
        else if(str[i]>=48 && str[i]<=57)
        {
            digit++;

        }

        i++;

    }

    printf("numbers of capital: %d\n",capital);
    printf("numbers of small: %d\n",small);
    printf("numbers of digit: %d\n",digit);


    return 0;
}
