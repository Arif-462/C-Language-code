/* There are three cards on the desk, each with a positive integer written on it.
 The integers on the cards are A, B, and C.You have chosen two cards and picked them up.
 Find the maximum possible sum of the integers written on the picked cards.
The range of the  A,B,C -> 1-100
>> Sample input -
3 4 5
6 6 6
99 99 98

>> Sample output -
9
12
198
*/


#include <stdio.h>

int main()
{
    int a,b,c,result;

    printf("enter the value of cards: ");
    scanf("%d %d %d",&a,&b,&c);

    if (a>=c && b>=c)
    {
        result  = a+b ;

    }



    else if (a>=b && c>=b)
    {
        result = a+c ;

    }


    else if  (b>=a && c>=a)
    {
        result = b+c ;

    }
    printf("%d",result);


    return 0;

}
