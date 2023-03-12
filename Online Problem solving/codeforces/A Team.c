/*
#include<stdio.h>
int main()
{
    int i,n;
    int p,v,t;
    int count=0;

    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d %d %d",&p,&v,&t);

        if(p+v+t>=2)
            count++ ;

    }

    printf("%d",count);



    return 0;

}
*/

#include<stdio.h> //nested loop soho.
int main()
{
    int i,j,p,n;
    int count=0;

    scanf("%d",&n);

    for(i=0; i<n; i++)

    {
        int done=0;


        for(j=0; j<3; j++)
        {
            scanf("%d",&p);
            done += p ;

        }
        if(done>=2)
            count++ ;

    }

    printf("%d",count);



    return 0;

}
