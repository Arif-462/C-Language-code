/* You are given a string S of (0-1) , (a-z) and (A-Z) . Now tell that whether the string is a binary string or not
Note – A binary string is a string that contains only 0 and 1.
Print YES if the string is a binary string otherwise print NO.
Note – Implement it using function
Sample Input 1:                                                         Sample Output 1:
aB1Bsi1001sd                                                                   NO
Sample Input 2:                                                         Sample Output 2:
0011110                                                                        YES
*/
#include<stdio.h>
#include<string.h>
int get_string(char s[])
{
    int len=strlen(s);
    for(int i=0; i<len; i++)
    {
        if(s[i]=='0'||s[i]=='1')
        {
            printf("Yes\n");
            break;
        }

        else
        {
            printf("No\n");
            break;
        }
    }
}
int string_len(char s[])
{
    int count=0;
    for (int i=0; i<'\0'; i++)
        count ++;
    //printf("%d\n",count);
}

int main()
{
    char s[50];
    scanf("%s",s);
    get_string(s);
    //string_len(s);

    return 0;
}





