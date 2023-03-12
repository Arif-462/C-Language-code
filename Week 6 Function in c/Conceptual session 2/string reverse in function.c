#include<stdio.h>
int get_string_size(char c[])
{
    int size=0;
    for(int i=0; c[i]!='\0'; i++)
    {
        size ++ ;
    }
    return size;
}

void string_reverse(char s[])
{
    int len = get_string_size(s);

    for(int i=0, j = len-1; i<len/2; i++, j--)
    {
        char temp=s[i];
        s[i]= s[j];
        s[j]= temp;
    }
     printf("%s\n",s);
}

void solved()
{
    char c[100];
    scanf(" %s",c);
    string_reverse(c);
    //printf("%s\n",c);


}
int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        solved();
    }
}
