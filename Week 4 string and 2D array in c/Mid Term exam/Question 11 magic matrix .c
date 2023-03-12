/*
#include<stdio.h>

int main()
{
    int a[3][3];
    int sum1=0;
    int sum2=0;
    int sumRow;
    int sumCol,f;


    printf("Enter your matrix elements..\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);

        }
    }

    printf("\nMatrix are...");

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d ",a[i][j]);

        }
        printf("\n");
        printf("\t     ");
    }

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(i==j)
            {
                sum1=sum1+a[i][j];
            }


            if(i+j==3-1)
            {
                sum2=sum2+a[i][j];
            }
        }

    }
    printf("\n");
    printf("Diangonal sum1 and sum2 = %d %d ",sum1,sum2);



    if(sum1!=sum2)
    {
        f=1;
    }
    else
    {
        for(int i=0; i<3; i++)
        {
            sumCol=0;
            sumRow=0;
            for(int j=0; j<3; j++)
            {
                sumCol=sumCol+a[j][i];
                sumRow=sumRow+a[i][j];
            }
            if(sumRow != sum1 && sumRow != sumCol)
            {
                f=1;
            }
            else
            {
                f=0;
            }
        printf("\n");
        printf("Sum of Row %d = %d\n",i,sumRow);
        printf("Sum of Column %d = %d\n",i,sumCol);

        }

    }




    if(f==0)
    {
        printf("\nYes, magic matrix.\n");
    }

    else
    {
        printf("\nNo, not magic matix.\n");
    }



    return 0;
}
*/


#include<stdio.h>

int main()
{

    int a[3][3];
    int i, j ;
    int sum, sum1, sum2;


    int flag = 0;

    //printf("Enter matrix elements : \n");
    for ( i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)

        {
            //printf("a[%d][%d] = ",i,j);
            scanf("%d", &a[i][j]);
        }
    }

    //printf("\nEntered matrix is : \n");
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
        {
            printf("   %d  ", a[i][j]);
        }
    }

    //For diagonal elements

    sum = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j)
                sum = sum + a[i][j];
        }
    }

    //For Rows

    for (i = 0; i < 3; i++)
    {
        sum1 = 0;
        for (j = 0; j < 3; j++)
        {
            sum1 = sum1 + a[i][j];
        }
        if (sum == sum1)
            flag = 1;
        else
        {
            flag = 0;
            break;
        }
    }

    //For Columns

    for (i = 0; i < 3; i++)
    {
        sum2 = 0;
        for (j = 0; j < 3; j++)
        {
            sum2 = sum2 + a[i][j];
        }
        if (sum == sum2)
            flag = 1;
        else
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("\n\n   YES\n\n");
    else
        printf("\n\n   NO\n\n");

    return 0;
}

/*
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
#include<stdio.h>
#include<conio.h>

int main() {
   int size = 3;
   int matrix[3][3]; // = {{4,9,2},{3,5,7},{8,1,6}};
   int row, column = 0;
   int sum, sum1, sum2;
   int flag = 0;

   printf("\nEnter matrix : ");
   for (row = 0; row < size; row++) {
      for (column = 0; column < size; column++)
         scanf("%d", &matrix[row][column]);
   }

   printf("Entered matrix is : \n");
   for (row = 0; row < size; row++) {
      printf("\n");
      for (column = 0; column < size; column++) {
         printf("\t%d", matrix[row][column]);
      }
   }

   //For diagonal elements
   sum = 0;
   for (row = 0; row < size; row++) {
      for (column = 0; column < size; column++) {
         if (row == column)
            sum = sum + matrix[row][column];
      }
   }

   //For Rows
   for (row = 0; row < size; row++) {
      sum1 = 0;
      for (column = 0; column < size; column++) {
         sum1 = sum1 + matrix[row][column];
      }
      if (sum == sum1)
         flag = 1;
      else {
         flag = 0;
         break;
      }
   }

   //For Columns
   for (row = 0; row < size; row++) {
      sum2 = 0;
      for (column = 0; column < size; column++) {
         sum2 = sum2 + matrix[column][row];
      }
      if (sum == sum2)
         flag = 1;
      else {
         flag = 0;
         break;
      }
   }

   if (flag == 1)
      printf("\nMagic square");
   else
      printf("\nNo Magic square");

   return 0;
}
*/
