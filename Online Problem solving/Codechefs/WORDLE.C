#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[6];
        char a[6];
        char s2[6];
        scanf("%s",s);
        scanf("%s",a);
        for(int i=0; s[i]!='\0'; i++)
        {
            if(s[i]==a[i])
            {
                s2[i] = 'G';
            }
            else
            {
                s2[i]='B';
            }
        }
        printf("%s\N",s2);

    }
    return  0;

}
