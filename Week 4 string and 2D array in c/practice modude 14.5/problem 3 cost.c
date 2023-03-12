#include<stdio.h>
int main()
{
    int i;

    char s[30];

    scanf("%s",s);

    int len = strlen(s);

    int count = 0;

    for(i=0; i<len; i++)
    {
        s[i] = s[i]-96;
        count++ ;
    }
    printf("%d",count);


    return 0;
}
