#include<stdio.h>

int string_size(char s[])
{
    int len=0;
    for(int i=0; s[i] !='\0'; i++)
    {
        len++;
    }
    return len;
}

void frequency_array(char s[] , int n)
{
    int largest_element = 26;

    int freq[largest_element+1];

    for(int i=1; i<=largest_element; i++)
    {
        freq[i]=0;
    }

    for(int i=0; i<n; i++)
    {
        freq[(s[i]-'a')+1]++;
    }

    printf("\n");
    for(int i=1; i<=largest_element; i++)
    {
        char ch;
        if(freq[i] != 0)
        {
            ch=i+96;
            for(int j=1; j<=freq[i]; j++)
            {
                printf("%c",ch);
            }
        }
    }

}


int main()
{
    char s[100];
    scanf("%s",s);
    int n = string_size(s);
    frequency_array(s,n);

//    int len=0;
//    for(int i=0; s[i]!='\0'; i++)
//    {
//        len++;
//    }
//    int largest_element = 26;
//
//    int freq[largest_element+1];
//    for(int i=1; i<=largest_element; i++)
//    {
//        freq[i]=0;
//    }
//
//    for(int i=0; i<len; i++)
//    {
//        freq[(s[i]-'a')+1]++;
//    }
//
//    printf("\n");
//    for(int i=1; i<=largest_element; i++)
//    {
//        char ch;
//        if(freq[i] != 0)
//        {
//            ch=i+96;
//            for(int j=1; j<=freq[i]; j++)
//            {
//                printf("%c",ch);
//            }
//        }
//    }

    return 0;
}
