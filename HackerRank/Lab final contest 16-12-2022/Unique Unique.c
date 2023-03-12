#include<stdio.h>
#include<string.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);

    char s[n];
    for(int i=0; i<n; i++)
    {
        scanf(" %c",&s[i]);
    }
    int maxx=26;
    int freq[maxx+1];

    for(int i=1; i<=maxx; i++)
    {
        freq[i]=0;
    }

    for(int i=0; s[i]!='\0'; i++)
    {
        freq[(s[i]-'a')+1]++;
    }

    for(int i=1; i<=maxx; i++)
    {
        if(freq[i] == 1)
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
