#include<stdio.h>
int main()
{
    char s[105];
    scanf("%s",s);
    int count=0;
    for(int i=0; s[i]!='\0'; i++)
    {
        if(s[i]==s[i+1])
        {
            count++;
        }
    }
    if(count>=7)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
