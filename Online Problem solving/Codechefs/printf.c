#include <stdio.h>

int main()
{
    int i,n,x,y,result;



    scanf("%d",&n);

    for(i=1; i<=n;i++)
    {
        scanf("%x %y",&x,&y);

        if(x>y)
        {
            result=1;
        }
        else if (x<y)
        {
            result=2 ;
        }
        else

            result = 3 ;




        printf("%d\n",result);

    }

	return 0;
}


