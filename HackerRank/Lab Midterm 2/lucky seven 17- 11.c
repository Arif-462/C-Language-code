#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20];
    char s2[20];
    int t;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",s1);


        int i=0,len=0,j;

        while(s1[i]!='\0')
        {
            i++ ;
            len++ ;
        }
        //printf("%d",len);

        for(j=0, i=len-1; i>=0; i--, j++)
        {
            s2[j]=s1[i];
        }
        s2[j]='\0';

        //printf("\ns1 = %s\n",s1);
        //printf("\ns2 = %s\n",s2);

        int d=strcmp(s1,s2);

        if(d==0)
        {
            if(len>7)
            {
                printf("Case #2: %c%d%c\n",s1[0],len-2,s1[len-1]);
            }
            else

                printf("Case #3: %s\n",s1);
        }
        else
        {
            printf("Case #1: Not Palindrome\n") ;
        }


    }


    return 0;
}
