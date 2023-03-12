 /*
 #include<stdio.h>
int main()
{
    char s[]="Ariful Islam";

    printf("string is: %s\n",s);      // using library function.
    int a=strrev(s);
    printf("Reverse String is: %s\n",s);


    // compare string

    if(a==s)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}
*/

#include<stdio.h>
int main()
{
    char s1[20]="Ariful Islam";
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

    printf("s2= %s\n",s2);


    return 0;
}


