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
        if(s[i] == s[i+1])
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

