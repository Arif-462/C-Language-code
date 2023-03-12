#include<stdio.h>
int main()
{
    char sen[1000];

    //scanf("%s", sen);
    //gets(sen);

    fgets(sen,sizeof(sen),stdin);

    //printf("%s",sen);

    int  i=0;
    int count=0;
    while (sen[i]!='\0')
    {
        if(sen[i]=='a')
            count ++;
        else if(sen[i]=='e')
            count++;
        else if(sen[i]=='i')
            count++;
        else if(sen[i]=='o')
            count++;
        else if(sen[i]=='u')
            count++;
        i++;
    }
    printf("Number of vowels %d",count);





    return 0;
}
