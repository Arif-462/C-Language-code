/* Four players participate in the playoff tournament. The tournament is held according to the following scheme - the first player will play with the second, and the third player with the fourth, then the winners of the pairs will play in the finals of the tournament.
It is known that in a match between two players, the one whose skill is greater will win.The tournament is called fair if the two players with the highest skills meet in the finals.Determine whether the given tournament is fair.

Output YES if the tournament is fair, or NO otherwise.

The skill of the first,second,third and fourth player is between 1-100.

>> Sample input -
3 7 9 5
4 5 6 9
5 3 8 1
6 5 3 2

>> Sample output -
YES
NO
YES
NO  */

/* #include<stdio.h>

int main()
{
    int a,b,c,d;
    int max1,max2,min1,min2;





    /*   if(max(a, b) > min(c, d) && max(c, d) > min(a, b)){
       printf("YES");
     }
    else
    {
    printf("NO");
    }   */

/*printf("Enter value of a b c and d: ");                                         //NOT  SOLVED
scanf("%d%d%d%d",&a,&b,&c,&d);

if (a>b || b>a && b<a || a<b)
    printf("%d %d",max1,min1);

else if (c<d || d>c &&  c<d || d<c,max2,min2);

 if (mxa1>min2 && max2>min1)
    printf("Yes");
else
    printf ("No");



return 0;
}
*/

#include <stdio.h>
int max(int x, int y)
{
    if(x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
int main()
{
    int a, b, c, d;
    printf("Enter the value of a b c d : ");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int left_max = max(a, b);
    int left_min = min(a, b);
    int right_max = max(c, d);
    int right_min = min(c, d);

    if (left_max > right_min && right_max > left_min )
    {
        printf("Yes");
    }
    else
        printf("No");

    // int final_max = max(left_max, right_max);
    //printf("Maximum number is: %d", final_max);

    return 0;
}
