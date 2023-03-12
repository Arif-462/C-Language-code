#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];


    scanf("%s",str);

    int count=0;

    int len = strlen(str);

    for(int i=0; i<len; i++)
    {
        printf("%s ",str[i]);

        if(str[i]!= '0' && str[i]!= '1')
        {
            count++;
            break;
        }


    }



    if(count == 0)
    {
        printf("\nYES\n");
    }
    else
    {
        printf("\nNO\n");
    }


    return 0;
}
