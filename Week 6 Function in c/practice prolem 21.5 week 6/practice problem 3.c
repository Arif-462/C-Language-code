/* You are given a positive integer n and after that a positive integer array of size n. Now print the sum of last digit
and first digit of the given n integers. Implement it using function (Don’t pass the values in function as an array
and try to implement using a single loop in your entire solution)
Note – It is guaranteed that all the integers will be a 4 digit value
Sample Input :                                   Sample Output :
5                                                   Sum = 21
2222 4414 1434 1011 1221
*/

#include<stdio.h>






int main()
{
    int n,a;
    scanf("%d",&n);

    scanf("%d",&a);
    int sum=0;
    int count=0;
    for(int i=0; i<n; i++)
    {
       sum = sum + a % 10;
       count++;
    }


    printf("last Sum = %d\n",sum);
    printf("last Sum = %d\n",count);



    return 0;
}
