#include<stdio.h>
int main()
{
    int a, b, c, sum1, sum2, i, t;

    scanf("%d",&t);

    for(i=0; i<=t; i++)
    {
        scanf("%d %d %d",&a, &b, &c);

        sum1 = a+b ;
        sum2 = b+c ;

        printf("%d %d\n",sum1, sum2);

        if(sum1/2 == 0 )
            {
                printf("YES/n");
            }

        else if (sum2/2 == 0)
            {
                printf("YES/n");  // not solve
            }

        else
            printf("NO\n");


    }
    return 0 ;
}
