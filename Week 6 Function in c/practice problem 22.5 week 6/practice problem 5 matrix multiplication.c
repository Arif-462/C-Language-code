#include<stdio.h>
int input_array(int ara[3][3])
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf("%d", &ara[i][j]);
        }
    }
printf("\n");
}


int input_array1(int ara1[3][3])
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf("%d", &ara1[i][j]);
        }
    }
printf("\n");
}

int print_array(int ara[3][3])
{
    int i,j;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d ", ara[i][j]);
        }
        printf("\n");
    }

    printf("\n");
}

int print_array1(int ara1[3][3])
{

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d ", ara1[i][j]);
        }
        printf("\n");
    }
printf("\n");
}


int multiplies_array(int ara1[3][3],int arr[3][3])
{


    for(int i=0; i<3; i++)
    {

        for(int j=0; j<3; j++)
        {
             arr[i][j]=0;
            for(int k=0; k<3; k++)
            {
                arr[i][j]= arr[i][j] + ara1[i][k] * ara1[k][j];
            }
        }
    }
}

int main(void)
{
    int ara[3][3];
    int mul[3][3];

    input_array(ara);
    input_array1(ara);
    print_array(ara);
    print_array1(ara);
    multiplies_array(ara,mul);


}

/*
int main()
{
    int n=3;
    int m=3;
    int arr1[n][m];
    int multiplication[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }


    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }



    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            multiplication[i][j]=0;

            for(int k=0; k<n; k++)
            {
                multiplication[i][j] = multiplication[i][j] + arr1[i][k] * arr1[k][j];

            }
        }


        printf("\n");
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("%d ",multiplication[i][j]);
        }
        printf("\n");
    }


}
*/
