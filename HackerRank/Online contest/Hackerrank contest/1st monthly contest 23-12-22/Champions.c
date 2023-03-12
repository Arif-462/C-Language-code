#include <stdio.h>
#include <string.h>

int main()
{
    char sent[1005] ;//= "this is my sample example";
    scanf("%s",sent);
    char word[] = "champions";
    for(int i=0; sent[i]!='\0'; i++)
    {
        if(sent[i]>='A' && sent[i]<='Z')
            sent[i]=sent[i]+32;
    }
    //printf("%s\n",sent);

    if (strstr(sent, word) != NULL)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}



/*
#include<stdio.h>
#include<string.h>
int main()
{
    char s[1005];
    scanf("%s",s);
    char a[]="champions";
    int l=strlen(a);
    for(int i=0; s[i]!='\0'; i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
    }
    int flag=0;
    for(int i=0; s[i]!='\0'; i++)
    {
        for(int j=0; j<=l-1; j++)
        {
            if(s[i] == a[j])
            {
                flag=1;
            }

        }
    }

    if(flag==1)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}

*/

