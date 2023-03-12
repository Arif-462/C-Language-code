/* 7. Take two integers as input and print their GCD as the output. We know, GCD of two numbers is the greatest common divisor of two numbers.
You can use the logic from Question no. 6 to solve this problem.
Sample Input 1:
12 18
Sample Output 1:
The GCD of 12 and 18 is 6.

Explanation:
Since 6 is the largest number which divides both 12 and 18 so 6 is output.
  */
#include <stdio.h>
int main()
{
    int num1, num2, i, gcd;

    //printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    for(i=1; i <= num1 && i <= num2; i++)
    {

        if(num1 % i == 0 && num2 % i == 0)
            gcd = i;
    }

    printf("The GCD of %d and %d is %d.\n", num1, num2, gcd);

    return 0;
}
