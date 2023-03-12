/*#include<stdio.h>
int main()
{
    int i,n,j;
    int arr[100005];
    int count=0;


    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&arr[i]);   // wrong ans
    }

    for(i=1; i<=n; i++)
    {
        for(j=2; j<arr[i]; j++)
        {
            if(arr[i]%j==0)
            {
                count=1;
                break;
            }
        }
        if(count==0 && arr[i]>1)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }


    return 0;
}
*/
#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        int n,count=0;
        scanf("%d",&n);
        for(int i=1; i<=n; i++)// okkkk
        {
            if(n%i==0)
            {
                count++;
            }
        }
        if(count==2)
            printf("Yes\n");
        else
        {

            printf("No\n");

        }
    }
}
