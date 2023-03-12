#include<stdio.h>
int string_size(char c[])
{
    int size=0;
    for(int i= 0; c[i]!='\0'; i++)
    {
        size++;
    }
    return size;
}

void chage_letter(char c[])
{
    for(int i=0; i<string_size(c); i++)
    {
        if(c[i]>='a' && c[i]<='z')
        {
            c[i]= c[i]-32 ;
        }
        else
        {
            c[i]= c[i]+32 ;
        }
    }
    printf("%s\n",c);

}

int main(void)
{
    char s[100];
    scanf("%s",s);
    chage_letter(s);

    return 0;
}
