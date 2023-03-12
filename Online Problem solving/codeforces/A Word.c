
#include<stdio.h>
int main()
{
    char s[102];
    scanf("%s",s);
    int L=0, U=0;
    for(int i=0; s[i]!='\0'; i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            L++;
        }
        else
        {
            U++;
        }
    }
    for(int i=0; s[i]!='\0'; i++)
    {
        if(L>=U && s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
        else if(L<U && s[i]>='a' && s[i]<='z')
        {
            s[i]=s[i]-32;
        }
    }
    printf("%s",s);
    return 0;
}
