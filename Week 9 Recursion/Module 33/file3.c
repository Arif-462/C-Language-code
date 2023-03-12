#include<stdio.h>
int main()
{
    int n,a;
    int sum=0;

    FILE* inputFile;
    FILE* outputFile;
    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");

    fscanf(inputFile, "%d",&n);

    if(inputFile==NULL)
    {
        printf("Not found\n"); //console e output day
        fprintf(outputFile, "Not found\n"); // file output day.
        return 0;
    }
    for(int i=0; i<n; i++)
    {
        fscanf(inputFile, "%d",&a);
        sum = sum + a;
    }
    fprintf(outputFile, "sum  = %d\n",sum);
    return 0;
}
