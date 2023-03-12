
#include<stdio.h>
int main()
{
    int i, x, y,mod, result,n,div;

    scanf("%d",&n);

    for (i=1; i<=n; i++)
    {
        scanf("%d %d",&x, &y);

        div=x/y;
        mod = x%y ;

        if(x%y==0)

            result = div ;
        else

            result = div+mod ;

        printf("%d\n",result);
    }
    return 0;
}
