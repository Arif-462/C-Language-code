#include<stdio.h>
int main()
{
    int n=8,m=8;
    //scanf("%d %d",&n, &m);
    int arr[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            arr[i][j]=0;
        }
    }


    int input_num;
    scanf("\n%d",&input_num);
    while(input_num--)
    {
        int r,c;
        scanf("%d %d",&r, &c);
        arr[r][c]= 1;
    }


    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    int count=0;
    for(int i=0; i<n; i++)
    {

        for(int j=0; j<m; j++)
        {
            if(arr[i][j]==1)
            {
                count++;
            }
        }

        if(count>1)
        {
            for(int j=0; j<m; j++)
            {
                arr[i][j]=0;
            }
        }
    }

    printf("\nprint arr:\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i<n; i++)
    {
        int save=0;
        for(int j=0; j<m; j++)
        {
            if(count==1)
            {
                save ++;
                printf("%d ",arr[i][j]);
            }
        }
        printf("\n");
    }



    return 0;
}
