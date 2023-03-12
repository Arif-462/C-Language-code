#include<stdio.h>
#include<string.h>
int decending_sorting_string(char s[]);
int main()
{
    char s[100];
    decending_sorting_string(s);
    return 0;
}

int decending_sorting_string(char s[])
{
    scanf("%s",s);
    int temp;
    for(int i=0; s[i]!='\0'; i++)
    {
        for(int j=i+1; s[j]!='\0'; j++) //ok
        {
            if(s[i]<s[j])
            {
                temp = s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }

    }

    printf("%s\n",s);
}


