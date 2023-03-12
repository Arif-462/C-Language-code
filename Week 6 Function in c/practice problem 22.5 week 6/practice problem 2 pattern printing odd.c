#include<stdio.h>
int print_pattern(int x)
{
    for(int i=1; i<=x; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
}

int main()
{

    int n;
    scanf("%d",&n);

    print_pattern(n);

    return 0;
}


//Phitron io2:27 PM
/*

1+2+3+4 = 10 = (n*(n+1))/2 = 10

int arr[(n*(n+1))/2];

for(int i=1;i<=(n*(n+1))/2;i++)
    arr -> 10 ta prime;

for(int i=1;i<=(n*(n+1))/2;i++)
{
    for(int j=1;j<=i;j++)
    {

    }
    newLine
}

*/
