#include<stdio.h>
void twice_character(char s[]);

int main(void)
{
    char s[100];
    scanf("%s",s);
    twice_character(s);
    return 0;
}

void twice_character(char s[])
{
    for(int i=0; s[i]!= '\0'; i++)
    {
        if(i % 2 == 1)
        {
            printf("%c%c",s[i],s[i]);
        }
        else
        {
            printf("%c",s[i]);
        }
    }
}
