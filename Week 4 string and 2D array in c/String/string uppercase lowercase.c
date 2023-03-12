

/*  //To lowercase


#include<stdio.h>
int main()
{
    char str[100];

    gets(str);

    strlwr(str);  // Upercase to lowercase using library function

    printf("Lowercase string: %s \n",str);

    return 0;
}
*/



// To uppercase

#include<stdio.h>
int main()
{
    char str[100];

    gets(str);

    strupr(str);  //lowercase to uppercase using library function

    printf("Lowercase string: %s \n",str);

    return 0;
}
