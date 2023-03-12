#include<stdio.h>
int check_power(int n)
{
    int ans = 0;
    while(n != 1)
    {
        int rem = n%2;
        n=n/2;
        ans ++;


        if(rem==1)
        {
            ans=0;
            break;
        }

    }
}
int main(void)
{
    char s[100];
    scanf("%s",s);
    int count=0;
    for(int i=0; s[i]!='\0'; i++)
    {

        count = count +s[i]-'a'+1;

    }
    //printf("%d\n", check_power(count));

    int ans=check_power(count);
    if(ans!=0)
    {
        printf("YES\n");
        printf("cost = 2^%d",ans);
    }
    else

    {
        printf("NO\n");
    }
}
