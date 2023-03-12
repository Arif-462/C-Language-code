#include <stdio.h>

int main()
{
    int t,i;
    int x=0;
    int y=0;

    scanf("%d",&t);

    for( i=0; i<t; i++)
    {
        scanf("%d %d",&x,&y);
        if(x<y)
            printf("FIRST\n");
        else if(x>y)
            printf("SECOND\n");
        else
            printf("ANY\n");
    }

    return 0;
}

