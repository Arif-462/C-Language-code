/* Problem-2

Programming Hero headquarters  has N floors, called the 1-st floor through the N-th floor. Each floor has K rooms, called the 1-st room through the K-th room.

Here, both N and K are one-digit integers, and the j-th room on the i-th floor has the room number i0j. For example, the 2-nd room on the 1-st floor has room number 102.
Now you are interested in the sum of the room numbers of all rooms of the Programming Hero headquarters, where each room number is seen as a three-digit integer. Find this sum.

Range of N and K -> 1-9
Sample Input-
1 2
3 3

Sample Output -
203
1818


Question(Bangla) -

Programming Hero headquarters এ n টা floors আছে এবং প্রত্যেক floor এ k টা রুম আছে।
For example - n=3 and k=3 তাহলে 1st floor এ রুম আছে 101,102,103 ..2nd floor এ রুম আছে 201,202,203 and  3rd floor এ রুম আছে 301,302,303 ...এখন আপনাকে সবগুলা রুমের যোগফল বের করতে হবে।


Problem Link -
https://atcoder.jp/contests/abc203/tasks/abc203_b
*/

#include<stdio.h>
int main()
{
    int n,k,i,nextRoom=101,result=0;
    int nextFloor=2;

    scanf("%d %d",&n, &k);


    for(i=1; i<=(n*k); i++ )
    {
        result+=nextRoom;
        nextRoom+=1 ;

        if(i%k==0)
        {
            nextRoom=(nextFloor*100)+1;
            nextFloor+=1 ;
        }


    }
    printf("%d\n",result);

    return 0;
}
