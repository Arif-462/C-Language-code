#include<stdio.h>
#include<string.h>

int main()
{
    int i,a,b;

    char s[25];


    int mul=0;
    int sum=0;
    int scount=0;
    int mcount=0;

    scanf("%s",s);
    int len = strlen(s);
     scanf("%d %d",&a, &b);


     for(i=0; i<len; i++)
    {
        if ( s[i] == '*' )
        {
            mul = a*b;

            mcount++;


        }

        else if (s[i]=='+')
        {
            sum = a+b;

            scount++;
        }



    }
       // printf("sum = %d\n",sum);
       // printf("mul = %d\n",mul);
        //printf("scount = %d\n",scount);
        //printf("mcount = %d\n",mcount);



    int result1=mul*mcount;
    int result2=sum*scount;
    int res=result1+result2;

    printf("%d\n",res);



    return 0;
}
