#include<stdio.h>
#include<string.h>

int main()
{

    char str[]="abcdefghijklmnopqrstuvwxyz";
    int i=0;

   while(str[i]!='\0')
   {
       int rollNumber=(str[i]-'a')+1;
       printf("%c....> %d\n",str[i],rollNumber);
       i++;
   }
   return 0;
}



