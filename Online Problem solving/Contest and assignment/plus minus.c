#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    int p=0, m=0, z=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(ar[i]==0)
        {
            z ++;
        }
        if(ar[i]<0)
        {
            m ++;
        }
        if(ar[i]>0)
        {
            p ++;
        }
    }
        printf("%f\n", (float)p/n);
        printf("%f\n", (float)m/n);
        printf("%f\n", (float) z/n);
        return 0;
}
