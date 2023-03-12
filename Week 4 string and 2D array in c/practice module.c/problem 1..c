/* You are given a string S of small letters, now sort the string on the basis of their count in descending order , It is
guaranteed that all the characters count are distinct.

Sample Input 1:                                                                                 Sample Output 1:
bbbbaccddd                                                                                          bbbbdddcca
Sample Input 2:                                                                                 Sample Output 2:
aabccc                                                                                               cccaab

Explanation of sample input 1 –
Total count of b = 4 , Total count of d=3, Total count of c=2 , Total count of a=1.
We can see that count of b is greatest among all the characters that’s why firstly b will come then 2nd

greatest count is

d , 3rd greatest count c and lastly a will come.

Hints – Nested loop and check the 31st October conceptual session
*/
#include<stdio.h>
#include<string.h>

int main()
{

    char str[1000];
    //gets(str);
    scanf("%s",str);

    int n=strlen(str),largestElement=26;

    int freq[largestElement+1];

    for(int i=1; i<=largestElement; i++)
    {
        freq[i]=0;
    }

    for(int i=0; i<n; i++)
    {
        freq[(str[i]-'a')+1]++;
    }
    int total=0;
    for(int i=1; i<=largestElement; i++)
    {

        if(freq[i]>=1)
        {
            total++;
        }
    }

    //printf("%d ",total);

    int next=0;
    int max =-1, index =-1;
    char cha;
    while(next!=total)
    {
        int max =-1, index =-1;
        char cha;

        for(int i=1; i<=26; i++)
        {
            if(freq[i]> max)

            {
                max = freq[i];
                cha = i+96;
                index = i;
            }

        }

       // printf("next greatest vlaue - %d \n", max);
        //printf("character - %c \n", cha);


        for(int i=1; i<=max; i++)
        {
            printf("%c",cha);
        }

        freq[index]=0;
        next++;
    }
    printf("\n");



    return 0;

}
