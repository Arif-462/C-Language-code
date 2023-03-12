#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100];
    char str2[100];

    printf("Enter your first name:\n",str1);
        gets(str1 );
    printf("Enter your last name with space:\n",str2);
        gets(str2);

        strcat(str1,str2);
        printf("%s \n",str1);

        int d=strlen(str1);

        printf("length is = %d\n",d);

        for(int i=d-1;i>=0;i--)
        {
            printf("%c ",str1[i]);
        }



    return 0;
}


