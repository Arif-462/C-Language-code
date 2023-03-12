#include<stdio.h>
#include<string.h>
int main()
{
    char s[105];
    scanf("%s",s);
    int n=strlen(s);
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(s[i]>s[j])
            {
                int tem=s[i];
                s[i]=s[j];
                s[j]=tem;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        if(s[i]!='+')
        {
            printf("%c",s[i]);
        }
        if(s[i]>=1 && s[i]!='+' && i<n-1 )
        {
            printf("+");
        }
    }

    return 0;
}

