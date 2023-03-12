#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    char s[100000];
    while(t--)
    {
        scanf(" %s",s);
        int n = strlen(s);
        for(int i=n-1; i>=0; i--)
        {
            printf("%c",s[i]+16 );
        }
        printf("\n");
    }
    return 0;
}
