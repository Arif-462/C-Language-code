#include<stdio.h>
int main()
{
    char str[100];

   // printf("Enter your words :");
    gets(str);

    int vowel=0;
    int consonant=0;
    int i=0;

    while(str[i]!='\0')
    {
        if(str[i]=='a'|| str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A'|| str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            vowel++;
        }
        else
        {
            consonant++;
        }

        i++;
    }




    printf("Vowel-%d\n",vowel);
    printf("Consonant-%d\n",consonant);





    return 0;
}
