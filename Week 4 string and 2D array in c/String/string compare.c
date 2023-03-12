#include<stdio.h>
int main()
{
    char s1[]="Ariful Islam";
    char s2[]="Islam";

    int d=strcmp(s1,s2);

    if(d==0)
    {
        printf("The string are equal\n");
    }
    else
    {
        printf("String are not equal\n");
    }

    return 0;

}
