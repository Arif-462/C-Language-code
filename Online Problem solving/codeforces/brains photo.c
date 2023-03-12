#include<stdio.h>
#include<string.h>

int main()
{
    int n, m;
    scanf("%d %d",&n, &m);
    char color[105][105];
    //Enter the matrix
    for(int k = 0; k < n; ++k)
    {
        for (int j = 0; j < m; ++j)
        {
           scanf(" %c",&color[k][j]);
        }
    }
    int count=0;
    for (int k = 0; k < n; ++k)
    {
        for(int j = 0; j < m; ++j)
        {
            if(color[k][j]=='C' || color[k][j]=='M' || color[k][j]=='Y')
            {
                count++;
            }
        }
        //printf("\n");
    }
    if(count != 0)
    {
        printf("#Color\n");
    }
    else
    {
        printf("#Black&White\n");
    }
    return 0;
}

