#include<stdio.h>

int string_size(char s[])
{
    int size=0;
    for(int i=0; s[i]!='\0'; i++)
    {
        size++;
    }
    return size;
    //printf("%d",size);
}

void convert_string(char s[])
{
    int i,n;
    scanf("%d",&n);

    int len = string_size(s);

    for(i=0; i<len; i++)
    {
        if (s[i]>='a' && s[i]<='x')
        {
            s[i]= s[i] + n  ;
        }

        else
        {
            s[i]= (s[i]-26) + n ;
        }
    }
     printf("%s",s);
}

int main(void)
{
    char s[100];
    scanf("%s",s);
    convert_string(s);
    return 0;
}



/*
int main()
{
    char s[50];
    int i,n;
    scanf("%s",s);
    scanf("%d",&n);
    int len=strlen(s);
    for(i=0; i<len; i++)
    {
        if (s[i]>='a' && s[i]<='x'  )
        {
            s[i] = s[i]+n;
        }

        else
        {
            s[i] = (s[i]-26) + n;
        }
    }

    printf("%s",s);

    return 0;
}
*/
