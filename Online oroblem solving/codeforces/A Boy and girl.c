#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    //int m = s.size();
    int count=0;
    for(int i=0; s.size(); i++)
    {
        if(s[i]==s[i+1] || s[i]==s[i+2])
        {
            count++;
        }
    }
    int size;
   if(count==0)
   {
       size=1*2*3;
   }
   else if(count==1)
   {
        size=1*2*3/2;
   }
   else if(count==2)
   {
        size=1;
   }
   cout<<size<<endl;

    return 0;
}
