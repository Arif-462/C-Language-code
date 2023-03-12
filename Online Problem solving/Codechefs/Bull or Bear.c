#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    int x,y;
	    scanf("%d %d",&x,&y);
	    if(x>y)
	    {
	        printf("loss\n");
	    }
	    else if(x==y)
	    {
	        printf("neutral\n");
	    }
	    else if(x<y)
	    {
	        printf("profit\n");
	    }
	}
	return 0;
}
