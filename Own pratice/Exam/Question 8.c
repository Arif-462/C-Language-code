/* 8. Take two integers as input and print their LCM as the output. We know, LCM of two numbers is the least common multiple of two numbers.
You can use the logic from Question no. 6 to solve this problem.
Sample Input 1:
12 18
Sample Output 1:
The LCM of 12 and 18 is 36.
Explanation:
Since 36 is the least number which is divisible by both 12 and 18 so 36 is the output.

  */
#include <stdio.h>
int main()
{
    int num1, num2, i, gcd,lcm;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    for(i=1; i <= num1 && i <= num2; ++i)
    {

        if(num1%i==0 && num2%i==0)
            gcd = i;
    }

    //printf("The GCD of %d and %d is %d\n", n, m, gcd);

    lcm = (num1*num2)/gcd ;

    printf("The LCM of %d and %d is %d.\n", num1, num2, lcm);

    return 0;
}
