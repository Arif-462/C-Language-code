/*3. You will be given a number as input. You will have to find the number of digits in that number.
You will have to use loops to solve this problem as the input can have any number of digits.
[Hint: Use the modulus operator. You can extract last digit from any number by using %10 operation on the number.]
For example,
Sample Input:
2346167

Sample Output:
7 digits

Since the input had 7 digits so the output is 7. Please use long long int as data type for this problem.

*/

#include <stdio.h>

int main()
{
    long long int num,digit = 0;

    scanf("%lld",&num);

    while (num != 0)
    {
        num = num / 10;
        digit++;
    }
    printf("%lld digits\n",digit);

    return 0;
}

/*
#include<stdio.h>
int main()
{
    int n;
    int digit=0;

    scanf("%d",&n);


    while(n>0)
    {
        digit= n%10;
        printf("%d \n",digit); //extract digit here
       n= n/10;
    }
    return 0;
}

*/
