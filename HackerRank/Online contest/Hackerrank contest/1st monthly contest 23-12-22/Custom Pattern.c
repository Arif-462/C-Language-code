#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    char c;

    scanf("%d %c",&n, &c);
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n-1; j++)
        {
            printf(" ");
        }
        for(int j=0; j<n; j++)
        {
            printf("%c",c);
        }
        printf("\n");
    }
    return 0;
}
