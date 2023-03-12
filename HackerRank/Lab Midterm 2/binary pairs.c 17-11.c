#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,t;
    char s[1005];

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);

        for(i=0; i<n; i++)
        {
            int count1=0;
            int count2=0;

            scanf("%s",s);


            int len = strlen(s);

            for(i=0; i<len-1; i++)
            {
                if(s[i] == '0'  &&  s[i+1]== '1')
                {
                    count1++;

                }

                if(s[i] == '1'  &&  s[i+1]== '0')
                {
                    count2++;

                }

            }

            int result=count1+count2;

            printf("%d\n",result);
        }

    }

    return 0;

}





























































