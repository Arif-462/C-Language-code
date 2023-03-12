/*
#include<stdio.h>
int main()
{
    int t,a,b,s,c,result;



    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        scanf("%d %d %d %d",&s, &a, &b, &c);

        result = s-(a+b+c);

        printf("%d\n", result);

    }
    return 0;
}


 #include<stdio.h>
int main()
{
    int t,s,a,b,c,result;



    scanf("%d",&t);  //My code

    scanf("%d %d %d %d",&s, &a, &b, &c);

    result = s-(a+b+c);

    if(result>0 && a>0 && b>0 && c>0)

    printf("%d\n", result);


    return 0;
}
*/

#include<stdio.h>
int main()
{
    int t,a,b,c,result,s;



    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        scanf("%d %d %d %d",&s, &a, &b, &c);

        result = s-(a+b+c);

        printf("%d\n", result);

    }
    return 0;
}
