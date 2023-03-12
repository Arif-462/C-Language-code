/* Write a C program to take one positive integer N as input and print all even numbers from 1 to N.

Sample Input:               Sample Output:
10                           2 4 6 8 10
7                               2 4 6
 */
 /*

 #include <stdio.h>
 int main()
 {
     int N,i=2;

     scanf("%d",&N);

     while (i<=N)
     {
         printf("%d ",i);
         i += 2 ;
     }



     return 0;
 }
*/

#include<stdio.h>
int main()
{
    int i,N ;

    scanf("%d",&N);

    for(i=2; i<=N;i+=2)
        printf("%d ",i);


    return 0;
}
