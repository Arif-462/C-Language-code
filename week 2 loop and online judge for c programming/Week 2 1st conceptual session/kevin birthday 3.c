/* Problem-3

For his birthday, Kevin received the set of pairwise distinct numbers 1,2,3,…,n as a gift.

He is going to arrange these numbers in a way such that the minimum absolute difference between two consecutive numbers is maximum possible. More formally, if he arranges numbers in order p1,p2,…,pn, he wants to maximize the value min |pi+1−pi| where the value of i is 1 to n-1.

Help Kevin to do that

Range of n -> 2-1000
Sample Input -
4
3

Sample Output -
2 4 1 3
1 2 3


Question(Bangla) -

Kevin টার birthday তে ১ থেকে n পর্যন্ত সংখ্যা gift পেয়েছে।এখন Kevin এই সংখ্যাগুলোকে এমনভাবে সাজাতে চায় যাতে সবগুলো পাশাপাশি দুইটা নাম্বার এর absolute difference বের করার পর তাদের minimum নিলে সেই minimum টা ই maximum হয়।

Hints -

>> even case
 For example n=6

এখন 1 2 3 4 5 6 এই ছয়টা সংখ্যা Kevin gift এ পেয়েছে। তাহেল সে যদি নিম্নোক্ত ভাবে সংখ্যাগুলো সাজায় -

3 6 2 5 1 4

এখন আমরা যদি সবগুলো পাশাপাশি দুটি নাম্বার এর absolute difference নি।তাহলে আমরা পাই-

abs(3-6) = 3
abs(6-2) = 4
abs(5-2) = 3
abs(1-5) = 4
abs(4-1) = 3

এখন  3,4,3,4,3 এদের মধ্যে minimum হচ্ছে 3 এবং 3 এর চেয়ে বড় ভেলু পাওয়া সম্ভব নয়

তার মানে আমরা বলতে পারি sequence টি হচ্ছে -
3 6 2 5 1 4



>> odd case
For example - 7

এখন 1 2 3 4 5 6 7 এই  সাতটা সংখ্যা Kevin gift এ পেয়েছে। তাহেল সে যদি নিম্নোক্ত ভাবে সংখ্যাগুলো সাজায় -

4 7 3 6 2 5 1

এখন আমরা যদি সবগুলো পাশাপাশি দুটি নাম্বার এর absolute difference নি।তাহলে আমরা পাই-
abs(4-7) = 3
abs(7-3) = 4
abs(3-6) = 3
abs(6-2) = 4
abs(2-5) = 3
abs(5-1) = 4

এখন  3,4,3,4,3,4 এদের মধ্যে minimum হচ্ছে 3 এবং 3 এর চেয়ে বড় ভেলু পাওয়া সম্ভব নয়।

তার মানে আমরা বলতে পারি sequence টি হচ্ছে -
4 7 3 6 2 5 1

এখন উপরে আমরা দুটি case দেখেছি একটি even case এবং আরেকটি odd case.

Even case এ  আমরা যদি (n/2) এবং n এই দুইটা ভেলু কে দুইটা ভেরিয়েবলে নিয়ে 1 থেক (n/2) পর্যন্ত  লুপ চালাই এবং প্রত্যকে বার ১ করে বিয়োগ করতে থাকি তহালে  sequence টি পেয়ে যাবো।

Odd case এ  আমরা যদি (n/2)+1 এবং n এই দুইটা ভেলু কে দুইটা ভেরিয়েবলে নিয়ে 1 থেক (n/2) পর্যন্ত লুপ চালাই এবং প্রত্যকে বার ১ করে বিয়োগ করতে থাকি এবং সবার শেষে 1 just  individually printf এ ইউজ করে print করি তহালে  sequence টি পেয়ে যাবো।

এই solution আমরা কিভাবে পেয়েছি ? Answer - বিভিন্ন case observe করার মাধ্যমে।
  */

  #include<stdio.h>
  int main()
  {
      int n, i;
      scanf("%d",&n);

      if(n%2==0)
      {
          n=n/2;
          for(i=1;i<n/2;i--)
          {

          }

      }

         else
         {
             for(i=1;i<(n/2)+1;i--)
          {

          }

         }

printf("%d",i);





      return 0;
  }
