#include<stdio.h>
int string_size(char c[])
{
    int size=0;
    for(int i=0; c[i]!='\0'; i++)
    {
        size++;
    }
    return size;
}

int find_digit(char c[])
{
    int count1 = 0;
    int count7 = 0;
    int count9 = 0;

    for(int i=0; i<string_size(c); i++)
    {
        if(c[i]=='1')
        {
           count1 = 1;
        }
        if(c[i]=='7')
        {
           count7 = 1;
        }
        if(c[i]=='9')
        {
           count9 = 1;
        }
    }

    if(count1==1 && count7 == 1 && count9 == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}

int main(void)
{
    char c[100];
    scanf(" %s",c);

    //int size = string_size(c);
    //printf("%d\n",size);

    find_digit(c);
}



/*
int main()
{
    char  s[100];

    scanf("%s",s);

    int len = strlen(s);

    int count1=0;
    int count2=0;
    int count3=0;
    for(int i=0;i<len; i++)
    {
        if(s[i]=='1')
        {
            count1 = 1;

        }
        if( s[i]=='7')
        {
            count2 = 1;

        }
        if( s[i]=='9')
        {
            count3 = 1;

        }
    }

    if( count1==count2==count3==1)
    {
        printf("yes\n");
    }
    else
    {
        printf("No\n");
    }


    return 0;
}
*/
