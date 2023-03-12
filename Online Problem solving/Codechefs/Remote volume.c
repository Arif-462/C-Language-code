#include <stdio.h>

int main()
{
    int i,t,x,y,vol;

    scanf("%d",&t);

    for(i=0; i<t; i++)
    {
        scanf("%d %d",&x,&y);

        vol=x-y;

        if(x<y)

            printf("%d\n",vol-(2*vol));

        else

            printf("%d\n",vol);

    }
}

