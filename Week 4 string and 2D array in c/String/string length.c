/*#include<stdio.h>
int main()
{
    char s1[]="Ariful islam";

    int i=0;

    int len = strlen(s1); // find length using library function.
    printf("Total length: %d",len);




    return 0;
}
*/

#include<stdio.h>
int main()
{
    char s1[]="Ariful islam";

    int i=0,count=0;

    while(s1[i]!='\0') // find length without librarjy function.
    {
        i++;
        count++;
    }
    printf("Total length: %d\n",count);




    return 0;
}


