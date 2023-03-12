#include<stdio.h>
int main()
{
    FILE *inputFile;
    inputFile = fopen("input.txt","r");
    //inputFile = fopen("input2.txt","r"); //file nai.
    FILE *outputFile;
    outputFile = fopen("output.txt","w");

    if(inputFile == NULL)// important jodi file na thake.
    {
        printf("no file found\n");
        return 0;
    }

    while(1)
    {
        char ch = fgetc(inputFile);
        if(ch==EOF)
        {
            break;
        }
        //printf("%c",ch);
        fputc(ch,outputFile);

    }
    return 0;
}

