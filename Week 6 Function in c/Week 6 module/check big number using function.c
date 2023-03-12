#include<stdio.h>

int bigest_number(x,y,z)
{
    if (x > y && x > z)
    {
        return x;
    }

    else if(x < y && z < y)
    {
        return y;
    }

    else
        return z;
}

int main()
{
    int a,b,c,i,m;
    for(i=0; i<5; i++)
    {
        printf("Enter your three numbers: \n");
        scanf("%d %d %d",&a,&b,&c);

        m = bigest_number(a,b,c);
        printf("The bigest numbers is %d\n",m);
    }



    return 0;
}

