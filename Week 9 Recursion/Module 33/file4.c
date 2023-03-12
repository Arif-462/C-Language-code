#include<stdio.h>
int main()
{
    FILE *logFile = fopen("Log.txt", "a");
    //fprintf(logFile, "Hello at 12.30 pm\n");
    FILE *inputFile = fopen("habijabi","r");
    if(inputFile==NULL)
    {
        fprintf(logFile, "File not fuound at 3:20 PM\n");
    }
    return 0;
}

