#include<stdio.h>
int main()
{
    int ara[25];
    int n;

    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }

    int max=ara[0];

    for(int i=0; i<n; i++)
    {

            if(max<ara[i])
            {
                max=ara[i];
            }

    }

    int sum=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {

            sum=ara[i]+ ara[j];

            if(sum % 2==0)
            {
                if(sum > max)
                {
                    max=sum;

                }
            }
        }
    }


    printf("%d\n",max);


    return 0;
}


  /*// arif vai


#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int a[25];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }


    int max = 0;
    int sum = 0;


    for (int i = 0; i < n; i++)
    {
        if (a[i]%2 == 0)
        {
            if (max < a[i])
            {
                max = a[i];
            }
        }
    }


    for (int i = 0; i < n; i++)
    {
        //sum = 0;

        for (int j = i + 1; j < n; j++)
        {
            sum = a[i] + a[j];

            if (sum % 2 == 0)
            {
                if (max < sum)
                {
                    max = sum;
                }
            }
        }
    }
    printf("%d\n", max);

    return 0;
}
*/

