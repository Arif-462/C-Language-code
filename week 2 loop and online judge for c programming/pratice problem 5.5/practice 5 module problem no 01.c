
/*Write a C program to take one positive integer N as input and print from 1 to N.

Sample Input:        Sample Output:
5                       1 2 3 4 5
1                       1
*/

/* Using while loop

#include <stdio.h>
int main(){

    int N,i=1;

    scanf("%d",&N);

    while (i<=N){

        printf("%d \n",i);
        i++ ;
    }


return 0;
}
*/

// using for loop

#include<stdio.h>
int main(){

    int i,N;

    scanf("%d",&N);

    for(i=1; i<=N; i++)
    {
        printf("%d ",i);
    }


return 0;

}
