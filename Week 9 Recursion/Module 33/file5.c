#include<stdio.h>
int main()
{
    FILE *inputFile = fopen("input.txt", "r");
    FILE *outputFile = fopen("output.txt", "w");

    int n;
    fscanf(inputFile, "%d",&n);
    fprintf(outputFile, "%d",n);

    if(inputFile==NULL)
    {
        fprintf(outputFile, "File not fuound at 2:00 PM\n");
        return 0;
    }
    fclose(inputFile);//oboshsoi korte hobe
    fclose(outputFile);

    return 0;
}


