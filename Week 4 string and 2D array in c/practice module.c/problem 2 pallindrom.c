/* You are given a string S of small letters, now check whether the given string is palindrome or not. If the string is
palindrome print YES otherwise print NO.
Note - A palindrome is a string that reads the same backward as forward

Sample Input 1:                                                                                         Sample Output 1:
aabbaa                                                                                                          YES

Sample Input 2:                                                                                         Sample Output 2:
abcd                                                                                                            NO

Hints – Reverse the string and compare.
*/


#include<stdio.h>
int main()
{
    char s1[20];
    char s2[20];

    gets(s1);

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

    //printf("s1= %s\n",s1);

   // printf("s2= %s\n",s2);

   int d= strcmp(s1,s2);


    if(d==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}

