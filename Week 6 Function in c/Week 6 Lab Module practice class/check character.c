#include<stdio.h>
int is_vowel(char x)
{
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||
       x=='A'||x=='E'||x=='I'||x=='O'||x=='U')

    {
        printf("character is vowel.\n");
    }
    printf("character is consonant.\n");
}
int main()
{
    char s;
    scanf("%c",&s);
//    s = getchar();
//    getchar();
    is_vowel(s);
    return 0;
}
