#include<stdio.h>
int main(){

int i,n ;
long long int sum=0;



printf("Enter natural number: ");
scanf("%d",&n);


//while(i<=n)
for(i=1; i<=n; i++)
{
    sum=sum+i;
    printf("%d\n",sum);


}
printf("The sum of first %d natural number is: %d\n",n,sum);








return 0;
}
