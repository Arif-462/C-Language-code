#include<stdio.h>
int main()
{
    char s1[]="Ariful";

    int i=0;

    while(s1[i]!='\0')
    {
        printf("%d...%c\n",i,s1[i]);
        i++ ;
    }

    return 0;
}

