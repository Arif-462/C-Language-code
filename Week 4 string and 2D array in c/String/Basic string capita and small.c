#include<stdio.h>
int main()
{
    char name[100];
    //char ch='D';
    //ch +=32;
    //printf("%c", ch);
    fgets(name,sizeof(name),stdin);
    int i;

    for(i=0; name[i]!='\0';i++)
    {
        if(name[i]>='a'&& name[i]<='z')
        name[i]-=32;

    }

    puts(name);








    return 0;
}
