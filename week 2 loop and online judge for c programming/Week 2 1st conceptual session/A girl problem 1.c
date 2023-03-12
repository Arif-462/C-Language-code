/* Little girl A is learning how to decrease a number by one, but she does it wrong with a number consisting of two or more digits. She subtracts one from a number by the following way -

>> if the last digit of the number is non-zero, she decreases the number by one;
>> if the last digit of the number is zero, she divides the number by 10 (i.e. removes the last digit).
You are given an integer number n. A will subtract one from it k times. Your task is to print the result after all k subtractions.

It is guaranteed that the result will be a positive integer number.

Range of n ->  2-1000000000
Range of k -> 1-50

Sample Input -
512 4
1000000000 9

Sample output -
50
1

Question(Bangla) -

আপনাকে একটি নাম্বার n দেওয়া হবে... k টা অপারেশন এর পর n এর ফাইনাল ভেলু কি হবে ...সেটা আপনাকে বলতে হবে।
প্রত্যেক অপারেশনে আপনি নিচের দুটির যেকোনো একটি কাজ করতে পারবেন -
১) যদি ওই নাম্বার টির লাস্ট ডিজিট নন-জিরো হয় তাহলে আপনি ওই নাম্বার থেকে ১ বিয়োগ করবেন।
২) যদি ওই নাম্বার টির লাস্ট ডিজিট জিরো হয় তাহলে আপনি ওই নাম্বারকে ১০ দিয়ে ভাগ করবেন।
Problem Link - https://codeforces.com/problemset/problem/977/A

*/
#include<stdio.h>
int main()
{
    int n,k,i;

    scanf("%d %d",&n,&k);

    for(i=1;i<=k;i++)
    {

        int last_digit=n%10;
        if(last_digit!=0)
        {
            n=n-1;
        }
        else
        {
            n=n/10;
        }



    }
    printf("%d",n);


    return 0;


}
