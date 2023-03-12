#include<stdio.h>
#include<string.h>
int main()
{
    int n,sum=0;
    char s[4];
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%s",s);
        if((strcmp(s,"X++")==0)||(strcmp(s,"++X")==0))
        {
            sum++;
        }
        else if((strcmp(s,"X--")==0)||(strcmp(s,"--X")==0))
        {
            sum--;
        }

    }

    printf("%d\n",sum);

    return 0;
}
