#include<stdio.h>
int main()
{
    char str[]="bbbbdaccddd";
    int n= strlen (str),largestElement=26;
    int freg [largestElement+1];

     for(int i=0;i,n; i++)
    {
         freg[i]=0;
    }

    for(int i=0; i<n; i++)
    {
         freg[(str[i]-'a')+1]++;
    }

    //for(i)


    while();

    {
        int max=-1,index=-1;
        char ch;
        int next=0;
        for(int i=1;i<=26; i++)
        {
            if(freg[i]>max)
            {
                max=freg[i];
                ch=i+96;
                index=i;

            }
        }

    }printf("next greater value- %d\n",max);
    printf("Character - %c\n\n",ch);
    freg[index]=0;
    next++;
