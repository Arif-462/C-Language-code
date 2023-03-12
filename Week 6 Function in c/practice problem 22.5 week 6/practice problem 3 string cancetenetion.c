#include<stdio.h>
int main()
{
    char s[50];
    char t[50];
    int n;
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        scanf(" %s",t);

        if(i==0)
        {
            strcpy(s,t);

        }
        else
        {
            strcat(s,t);
        }
        strcat(s," ");
    }

    printf("%s",s);



}
