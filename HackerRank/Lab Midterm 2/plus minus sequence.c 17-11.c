#include<stdio.h>
#include<string.h>
int main()
{
    int i,n;

    char s[101];


    int count=1;
    int max=0;

    scanf("%d",&n);
    scanf("%s",s);

    for(i=0; i<n-1; i++)
    {
        if(s[i]== s[i+1])
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




/*
#include <stdio.h>
#include <string.h>

int main()
{

    int n;
    char str[103];

    scanf("%d", &n);

    scanf("%s", str);

    int count = 1;
    int max_sign = 0;

    for (int i = 0; i < n - 1; ++i)
    {
        if (str[i] == str[i + 1])
        {
            ++count;
        }
        else
        {
            if (max_sign < count)
            {
                max_sign = count;
            }
            count = 1;
        }
    }
    if (max_sign < count)
    {
        max_sign = count;
    }
    printf("%d\n", max_sign);

    return 0;
}
*/
