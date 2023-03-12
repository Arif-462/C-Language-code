/* This block code does not declare how it increases. So, when run this code in any compiler,
it  continues what is written between inverted commas of  printf function.

So, to fix this problem, declare how it increases and write code one by one that is  i++; or i+=1; .
When it is fixed then the code will be executed ten times between loop.
The right code given below :
*/

#include<stdio.h>
int main()
{
    int i=0;
    while(i<10)
    {
        printf("I am inside the loop\n");
        i+=1;
    }
    return 0;
}



