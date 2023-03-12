#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int ot, in;
        scanf("%d %d",&ot, &in);
        int sum= ot+in;
        int max=(sum-ot)+in;

        if(max>sum)
        {
            printf("%d\n", max);
        }
        else
        {
            printf("%d\n",sum);
        }
    }
    return 0;
}
