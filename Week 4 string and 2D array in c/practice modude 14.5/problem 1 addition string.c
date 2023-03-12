#include<stdio.h>
#include<string.h>

int main()
{
    int i,m;
    char str[200];

    scanf("%d",&m);

    for(i=0; i<m ; i++)
    {
        char s[100];

        scanf(" %s",s);

        if(i==0)
        {
            strcpy(str,s);
        }
        else
        {
            strcat(str,s);
        }


        strcat(str," ");
    }

    puts(str);




    return 0;
}
