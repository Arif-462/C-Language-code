#include<stdio.h>
#include<string.h>
int main()
{
    char str[1005];
    int i;

    scanf("%s",str);

    int count=0;

    int len = strlen(str);

    for(i=0; i<len; i++)
    {
        printf("%c",str[i]);

        if(str[i]+str[i+1] == 1 /*&& str[i]+str[i+1== '0'*/)
        {
            count++;

        }


    }
    printf("\n%d\n",count);



    if(count == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }


    return 0;
}
