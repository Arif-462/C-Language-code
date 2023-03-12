
#include<stdio.h>
int main()
{
    int t,n;
    int s[10005];
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        for(int i=0; i<n; i++)
        {
            scanf("%d", &s[i]);
        }
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(s[i]<s[j])
                {
                    int temp=s[i];
                    s[i]=s[j];
                    s[j]=temp;
                }
            }
        }
        int maxx=s[0];
        int minn=s[n-1];
        if(maxx<minn)
        {
            int temp=maxx;
            maxx=minn;
            minn=temp;
        }
        int a=maxx*maxx;
        int b=minn*minn;
        int c=maxx+maxx;
        int d=minn+minn;
        if(a<b)
        {
            int tem=a;
            a=b;
            b=tem;
        }
        printf("%d %d %d %d\n",a,b,c,d);
    }
    return 0;
}

/*
//Md. Rashadul Islam
#include <stdio.h>
void sort(int *ptr, int size);
int main()
{
    int t, n;
    scanf("%d",&t);
    int mam,maa,mim,mia;
    while(t--)
    {
        scanf("%d",&n);
        int a[n];
        for(int i = 0; i<n ; i++)
            scanf("%d",a+i);
        sort(a,n);
        mam = (a[n-1]*a[n-1])>(a[0]*a[0])?(a[n-1]*a[n-1]):(a[0]*a[0]);
        if(a[0]<=0&&a[n-1]>=0)
            mim=a[0]*a[n-1];
        else if(a[0]>=0)
            mim = a[0]*a[0];
        else mim = a[n-1]*a[n-1];
        maa = a[n-1]*2;
        mia = 2*a[0];
        printf("%d %d %d %d\n",mam, mim, maa, mia);
    }
    return 0;
}
void sort(int *ptr, int size )
{
    int * base_addr=ptr, item, *left;
    ptr++;
    for(ptr; ptr<base_addr+size; ptr++)
    {
        item = *ptr;
        left = ptr-1;
        while(left>=base_addr && item<*left)
        {
            *(left+1)=*left;
            --left;
        }
        *(++left) = item;
    }
}
*/

/*

#include<stdio.h>
int main()
{
    int t,n;
    int s[1005];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(int i=0; i<n; i++)
        {
            scanf("%d", &s[i]);
        }
        int maxx=s[0];
        int minn=s[0];
        for(int i=0; i<n; i++)
        {
            if(s[i]>maxx)
            {
                maxx=s[i];
            }
//            else if(s[i]>0 && maxx<s[i])
//            {
//                maxx=s[i];
//            }
        }
        for(int i=0; i<n; i++)
        {
            if(s[i]<minn)
            {
                minn=s[i];
            }
//            else if(s[i]>0 && minn>s[i])
//            {
//                minn=s[i];
//
//            }

        }

//        printf("Minn %d\n",minn);
//        printf("Maxx %d\n",maxx);


        int a=maxx*maxx;
        int b=minn*minn;
        int c=maxx+maxx;
        int d=minn+minn;
        if(a<b)
        {
            int tem=a;
            a=b;
            b=tem;
        }

        if(c<d)
        {
            int temp=c;
            c=d;
            d=temp;
        }
        printf("%d %d %d %d\n",a,b,c,d);
    }
    return 0;
}

*/
