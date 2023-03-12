#include<stdio.h>
int main()
{
    int n;
    printf("Enter value of n: ");
    scanf("%d",&n);


    while(n>1)
    {
        printf("-->> %d\n",n);// 3n+1 formula in c programe
        if (n%2==0)
        {
            n=n/2;

        }

        else
        {
            n=3*n+1;
        }



    }
     printf("-->>>%d",n);
    return 0;

}
