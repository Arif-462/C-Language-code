#include<stdio.h>
void change_string(char s[])
{
   for(int i=0; s[i]!='\0'; i++)
    {
        if(s[i]%2==0)
        {
            s[i]=s[i]-32;
        }
    }
    printf("%s",s);
}
int main()
{
    char s[100];
    scanf("%s",s);
    change_string(s);

    return 0;
}
