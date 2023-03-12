#include<stdio.h>
int main()
{
    int ara[8]= {12,7,9,3,15,2,6,5};
    int n=8,i,j;



    for(i=0; i<n; i++)
    {
        printf("%d ",ara[i]);

    }
    printf("\n");



    int sortedara[8];

    int min=ara[0];
    int minIndex=0;

    for(j=0; j<n; j++)
    {
         int min=ara[0];
        int minIndex=0;
        for(i=0; i<n; i++)
        {
            if(ara[i]<min)
            {
                min=ara[i];
                minIndex=i;
            }
        }

        printf("%d\n",min);



        sortedara[j]=min;
        ara[minIndex]=9999;

        for(i=0; i<n; i++)
        {
            printf("%d ",ara[i]);

        }
    }


    printf("\n");
    for(i=0; i<n; i++)
        {
            printf("%d ",sortedara[i]);

        }




    return 0;
}
