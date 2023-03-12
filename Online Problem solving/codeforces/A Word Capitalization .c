#include<stdio.h>
#include<string.h>
int main()
{
    char s[1005];
    scanf("%s", s);
    int len = strlen(s);
    for(int i=0; i<1; i++)
    {
        if(s[i]>='a' &&  s[i]<='z')
            s[i]=s[i]-32;
    }

    printf("%s",s);

    return 0;
}
