#include<stdio.h>
#include<stdbool.h>

int get_string_size(char s[])
{
    int size;
    for (int i=0; s[i]!='\0'; i++)
    {
        size ++;
    }
    return size;
}
bool check_even_odd(int size)
{

    if(size % 2 ==0)
        return true;
    else
        return false;
}

void solved(void)
{
    printf("Enter string\n");
    char s[100];
    scanf(" %s",s);

    int sz = get_string_size(s);
    printf("%d\n",sz);

    bool even_odd = check_even_odd( sz);
    if(even_odd==true)
    {
        printf("string size %d evem numbers.\n",sz);
    }
    else
    {
        printf("string size %d odd numbers.\n",sz);
    }

}

int main(void)
{
    int t;
    printf("enter test case\n");
    scanf("%d",&t);
    while(t--)
    {
        solved();
    }

}
