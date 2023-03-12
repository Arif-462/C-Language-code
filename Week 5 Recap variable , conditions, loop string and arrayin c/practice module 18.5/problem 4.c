#include<stdio.h>
int main()
{
    char s[100];

    printf("Enter your chosen words:\n");

    //scanf("%s",s); //space ney na.
    gets(s);

    for(int i=0;i<strlen(s);i++)

    {
            if(s[i] == s[i+1])
            {
                continue;
            }
            else
            {
                printf("%c",s[i]);
            }

    }

    return 0;
}
