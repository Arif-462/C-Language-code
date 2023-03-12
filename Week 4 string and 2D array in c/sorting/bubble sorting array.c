#include<stdio.h>
int main()
{
    int n=8,i,j;
    int ara[8]= {12,7, 9,3,15,2,6,5};

    int tep;


    for(i=0; i<n; i++)
    {
        printf("%d ",ara[i]);
    }
    printf("\n");

    for(j=0; j<n; j++)
    {
        for(i=0; i<n-1; i++)
        {
            if (ara[i]>ara[i+1])
            {
                tep=ara[i];
                ara[i]=ara[i+1];
                ara[i+1]=tep;
            }
        }


        printf("\n");

        for(i=0; i<n; i++)
        {
            printf("%d ",ara[i]);
        }
    }




    return 0;
}
