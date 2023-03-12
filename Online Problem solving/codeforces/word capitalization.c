#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    scanf("%s",s);
    int len=strlen(s);
    for(int i=0;i<len; i++)
    {
        if(s[0]>='a' && s[0]<='z')
            s[0]=s[0]-32;
    }
    for(int i=0;i<len; i++)
    {
        printf("%c\n",s[i]);

    }
    return 0;
}

