#include<stdio.h>
int main()
{
    while(1)
    {
        int a, b;
        char c;
        char cancel;
        printf("Enter c for continue e for exit :");
        scanf("%c",&cancel);

        if(cancel=='c')
        {
            cancel ='\0';

            scanf("%d %c %d",&a, &c, &b);

            int result;

            if(c=='+')
            {
                result=a+b;
            }
            else if(c=='-')
            {
                result =a-b;
            }
            else if(c=='*')
            {
                result = a * b;
            }
            else
            {
                result= a/b;
            }

            printf("%d %c %d = %d\n",a,c,b,result);

        }


        else if(cancel=='e')
        {
            cancel ='\0';

            break;
        }
    }
    return 0;
}
