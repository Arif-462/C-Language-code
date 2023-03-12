#include<stdio.h>
int main()
{
    int n;

    scanf("%d",&n);

    int pack = n;
    int choc = n;

    while(pack>=4){

        choc = choc + (pack/4);
        pack = (pack/4)+ (pack%4);

    }

    printf("Total chocolet are: %d",choc);




    return 0;
}
