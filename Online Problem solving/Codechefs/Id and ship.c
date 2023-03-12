#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char ch;
        scanf(" %c", &ch);
        if(ch=='b' || ch=='B')
        {
            printf("BattleShip\n");
        }
        else if(ch=='C' || ch=='c')
        {
            printf("Cruiser\n");
        }
        else if(ch=='D' || ch=='d')
        {
            printf("Destroyer\n");
        }
        else
        {
            printf("Frigate\n");
        }
    }
    return 0;
}
