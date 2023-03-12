#include<stdio.h>
int main()
{
    long long int n,w,h,t;


    scanf("%lld",&t);

    for(int i=0; i<t; i++)
    {
        scanf("%lld %lld %lld",&w, &h ,&n);
         //printf("%d %d %d",w, h ,n);
         long long int ans=1;

         while(w%2==0)
         {
             ans=ans*2;
             w=w/2;
         }
          while(h%2==0)
         {
             ans=ans*2;
             h=h/2;
         }

         if( ans>=n)
            printf("YES\n");
         else
            printf("NO\n");
    }

    return 0;
}
