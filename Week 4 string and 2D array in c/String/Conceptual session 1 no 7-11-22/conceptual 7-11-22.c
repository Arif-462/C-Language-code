#include<stdio.h>
int main()
{
    char str[100];

    gets(str);

    printf("%s\n",str);

    int i=0, len=0;

    while(str[i]!=0)
    {
        i++ ;
        len ++ ;
    }

    printf("The total length of string is = %d\n",len);

    for(i=len-1; i>=0; i--)
    {
        printf("%c ",str[i]);
    }


    return 0;
}
