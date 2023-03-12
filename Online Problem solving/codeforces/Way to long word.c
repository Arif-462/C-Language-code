#include<stdio.h>
#include<string.h>
int main()
{
    char name[101];

    int i,n;
    scanf("%d",&n);

    for(i=0; i<=n; i++)
    {
        gets(name);

        int len = strlen(name);

        if(len>10)
        {
            printf("%c%d%c\n",name[0],len-2,name[len-1]);
        }
        else

        printf("%s\n",name);


    }


    return 0;
}
