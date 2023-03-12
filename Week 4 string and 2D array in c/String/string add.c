/* #include<stdio.h>
int main()
{
    char s1[]="My name is ";
    char s2[]="Ariful Islam";

    strcat(s1,s2);
    //strcat(s1,"Ariful Islam");   // string add using library function.

    printf("Full name: %s\n",s1);





    return 0;
}
*/

#include<stdio.h>
int main()
{
    char s1[50]="My name is ";
    char s2[20]="Ariful Islam";

     // string add using library function.

     int i=0,len=0,j=0;

     while(s1[i]!='\0')
     {
         i++ ;
         len++;
     }
     while(s2[j]!='\0')
     {
         s1[len+j]=s2[j];
         j++ ;

     }


    printf("Full name: %s\n",s1);





    return 0;
}
