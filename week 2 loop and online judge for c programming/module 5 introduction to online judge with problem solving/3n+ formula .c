/*// using while loop
#include<stdio.h>
int main()
{
    int n, i;

    printf("Enter any integer number: ");
    scanf("%d",&n);
    int count=0;
    i=0;
    while(n>1)
    {
        if(n%2==0)
        {
            n=n/2;
        }
        else
        {
            n=3*n+1;
        }
        printf("%d\n",n);
        count++;
    }
    printf("\ntatal %d times\n",count);
}
*/

// using for loop

#include<stdio.h>
int main()
{
    int n, i;

    printf("Enter any integer number: ");
    scanf("%d",&n);
    int count=0;

    for(i=0; n>1; i++)
    {
        if(n%2==0)
        {
            n=n/2;
        }
        else
        {
            n=3*n+1;
        }
        printf("%d\n",n);
        count++;
    }
    printf("\ntatal %d times\n",count);
}
