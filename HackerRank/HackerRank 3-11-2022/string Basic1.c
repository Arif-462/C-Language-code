
#include<stdio.h>
 main()
{
    char name[15]="Ariful Islam";
    name[0]='x';
    name[12]='y';
    name[13]='\0';
    //scanf("%",name);
    printf("%s My name",name);



    return 0;
}
