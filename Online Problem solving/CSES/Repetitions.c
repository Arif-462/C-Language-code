#include<stdio.h>
#include<string.h>
int main()
{


    char str [1000005];

    scanf("%s",str);

    int count=1;
    int max=0;

    for(int i=0; i<strlen(str)-1; i++)
    {
        if(str[i] == str[i+1])
        {
            count++ ;
        }
        else
        {
            if(max<count)
            {
                max=count;
            }
             count=1;
        }


    }
    if(max<count)
    {
        max=count;
    }

    printf("%d\n",max);

    return 0;
}
