/*#include<stdio.h>
int largest_number(int x, int y)
{
    if(x>y)
    {
       return x;
    }
    else
    {
        return y;
    }
}
int main(void)
{
    int a,b;
    printf("Enter two integer numbers\n");
    scanf("%d %d",&a, &b);

    int ans = largest_number(a, b);
    printf("%d is the largest number\n", ans);
    return 0;
}
*/// Function with arguments and no return value
#include<stdio.h>
void largest_number(int x, int y)
{
    if(x>y)
    {
        printf("%d is the largest number\n", x);
    }
    else
    {
        printf("%d is the largest number\n", y);
    }
}
int main(void)
{
    int a,b;
    printf("Enter two integer numbers\n");
    scanf("%d %d",&a, &b);
    largest_number(a, b);
    return 0;
}

/*no arguments return value
#include<stdio.h>
int largest_number()
{
    int a,b;
    printf("Enter two integer numbers\n");
    scanf("%d %d",&a, &b);
    if(a>b)
    {
        return a;
    }
    else
    {
       return b;
    }
}

int main()
{
    int ans = largest_number();
    printf("%d is the largest number\n", ans);
    return 0;
}


/*
//no arguments no value
#include<stdio.h>
void largest_number()
{
    int a,b;
    printf("Enter two integer numbers\n");
    scanf("%d %d",&a, &b);
    if(a>b)
    {
        printf("%d is the largest number\n", a);
    }
    else
    {
        printf("%d is the largest number\n", b);
    }
}

int main()
{
    largest_number();
    return 0;
}
*/
