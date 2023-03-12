#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    int n,d=1;

   for(int k=1; k<=t; k++)
    {
        scanf("%d",&n);
        int ar[n];
        for(int i=1; i<=n; i++)
        {
            scanf("%d ",&ar[i]);
        }
        int r,f=0,s;
        scanf("%d",&r);
        for(int i=1; i<=n; i++)
        {
            if(ar[i]== r)
            {
                f=1;
                s=i;
                break;
            }

        }


        if(f==1)
        {
            printf("Case %d: %d\n",d,s);

        }
        else
        {
            printf("Case %d: Not Found\n",d);

        }
        d++;

    }
    return 0;
}
