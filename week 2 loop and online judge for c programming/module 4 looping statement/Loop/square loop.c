#include<stdio.h>
int main()
{
    int i,n;
    int sum=0;
    printf("Enter Choosen natural numbers: ");
    scanf("%d",&n);


     for(i=1;i<=n;i++)
   {
     printf("Number is: %d and square of %d is: %d   \n",i,i,i*i*i);
     sum=i*i*i;
   }
   printf("\nThe Square of first %d Natural Numbers are = %d.\n",n,sum);

   return 0;
}
