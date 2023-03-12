/* You are given an operator as a character + or – or * or / . You are also given two positive integers a and b after that.
Now perform addition or subtraction or multiplication or division on the basis of the given input. You can subtract
a-b or b-a ...similarly for others operators also. Implement it using function.

Sample Input :                      Sample Output :
*
10 4                                    40
*/

#include<stdio.h>


int result(int x,int y,char ch)
{

     if(ch=='+')
    {
       return x+y;
    }
    else if(ch=='-')
    {
        return x-y;
    }
    else if(ch=='*')
    {
        return x*y;
    }
    else
    {
        return x/y;
    }

}




int main()
{
    char ch;
    scanf("%c",&ch);

    int a, b;
    scanf("%d %d", &a, &b);

    int ans = result(a, b, ch);

    printf("%d \n",ans);

    return 0;
}
