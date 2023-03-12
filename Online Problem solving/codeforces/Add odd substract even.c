#include<stdio.h>
int main()
{
    int i,x,y,n,m;

    scanf("%d",&n);


    for(i=1; i<=n; i++)
    {
        scanf("%d %d",&x,&y);


        if(x>y)
        {
            m = x-y;

        }
        else if(x<y)
        {
            m=y-x;
        }
        else
            m=0;

    }

    printf("%d\n",m);

    return 0;
}
