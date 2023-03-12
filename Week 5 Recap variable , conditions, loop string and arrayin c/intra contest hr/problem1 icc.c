/*
Problem Statement

ICC Men's T20 World Cup Final of 2022 has ended. The full form of ICC is International Cricket Council.
Now print it in reverse order. Can you print it??

Input Format
*/
/*
#include<stdio.h>
#include<string.h>
int main()
{


    char str[]="International Cricket Council";

    printf("string is: %s\n",str);
    strrev(str);
    printf("%s\n",str);



    return 0;
}
*/

#include<stdio.h>
int main()
{
    char s1[50]="International Cricket Council";
    char s2[50];

    int i=0,len=0,j;

    while(s1[i]!='\0')  // not use library functin.
    {
        i++ ;
        len++ ;
    }
    //printf("%d",len);

    for(j=0, i=len-1; i>=0; i-- , j++)
    {
        s2[j]=s1[i];
    }
    s2[j]='\0';

    printf("%s\n",s2);


    return 0;
}

