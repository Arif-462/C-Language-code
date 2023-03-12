#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20]="mmmmmaaaaammmmm";
    char s2[20];

    int i=0,len=0,j;

    while(s1[i]!='\0')  // not use library functin.
    {
        i++ ;
        len++ ;
    }
    printf("%d",len);

    for(j=0, i=len-1; i>=0; i-- , j++)
    {
        s2[j]=s1[i];
    }
    s2[j]='\0';

    printf("\ns1 = %s\n",s1);
    printf("\ns2 = %s\n",s2);

    int d=strcmp(s1,s2);

    if(d==0)
    {
       printf("string is palindrom\n") ;
    }
     else
    {
       printf("string is not palindrom\n") ;
    }


    return 0;
}

