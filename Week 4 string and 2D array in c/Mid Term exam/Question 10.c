/*
How can you find the sum of digits of a number?
Write a C program that will extract the digits of the given integer number as input and add them to find the required output.
For example, if the input is 1235623, then the output will be 22. Because, 1+2+3+5+6+2+3 = 22.                                            (6)

*/

#include<stdio.h>
int main(){

 int i,n;
 int sum=0;
 int number;



printf("Enter natural number: ");
scanf("%d",&n);



while(n!=0)
{
    number=n%10;
    n=n/10;
    sum=sum+number;
    i++;




}
printf("The sum  %d digits of a number is: %d\n",i,sum);








return 0;
}
