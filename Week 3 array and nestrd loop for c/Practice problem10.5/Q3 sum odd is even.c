/* Write a C program to take one positive integer N, the size of an array as input. Then take a positive integer array
of size N as input and tell if the sum of odd values is even or not.
If the sum of odd values is even print YES otherwise NO.

Sample Input 1:                             Sample Output 1:
5                                               YES
5 2 7 4 6
Sample Input 2:                             Sample Output 2:
5                                                NO
3 17 8 10 3
 */

 #include<stdio.h>
 int main()
 {
     int i,n;
     int ara[100];
     int sum=0;


     scanf("%d",&n);
     for(i=0; i<n; i++)
     {
         scanf("%d",&ara[i]);
         if(ara[i]%2!=0)
         {
             sum++ ;
         }


     }
     if(sum%2==0)
     {
         printf("YES");
     }
     else
     {
         printf("NO");
     }










     return 0;
 }
