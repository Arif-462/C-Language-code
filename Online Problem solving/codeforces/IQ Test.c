#include<stdio.h>
int main()
{
    int n,i;
    int arr[103];
    int ec=0, oc=0,result;

    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=1; i<=n; i++)
    {
        if(arr[i]%2==0)
            ec++;

        else
            oc++;

    }



    //printf("Even= %d \nOdds=%d", ec, oc);

    if(ec==1)
    {
        for(i=1; i<=n; i++)
        {
            if(arr[i]%2==0)
            {
                result = i;
            }

        }
    }
    else

        for(i=1; i<=n; i++)
        {
            if(arr[i]%2!=0)
            {
                result = i;
            }

        }



    printf("%d\n",result);



    return 0;
}
