#include<stdio.h>
int main()
{
    char str[100];

    int i,vowel,digit,word,other,consonant;
    char cha;


    printf("Enter your words :");
    gets(str);

    i=vowel=consonant=digit=word=other=0;

    while(str[i]!='\0')

    {
        if(str[i]=='a'|| str[i]=='e' ||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'|| str[i]=='E' ||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            vowel++;
        }
        else if ((str[i]>='a'&& str[i]<='z') || (str[i]>='A'&& str[i]<='Z'))
        {
            consonant++;
        }
        else if (str[i]==' ')
        {
            word++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digit++;
        }
        else
        {
            other++;
        }


        i++;

    }
    word++;

    printf("number of vowels = %d\n",vowel);
    printf("number of consonants = %d\n",consonant);
    printf("number of digits = %d\n",digit);
    printf("number of words = %d\n",word);
    printf("number of others = %d\n",other);


    return 0;

}
