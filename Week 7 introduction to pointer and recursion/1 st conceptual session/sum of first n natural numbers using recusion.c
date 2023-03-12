#include<stdio.h>
int sum(int n)
{
    if(n>0)
    {
        return sum(n-1)+n ;

    }
    return 0;

}

int main()
{
    int a=sum(10);
    printf("%d",a);
}
//1 2 3 4 5 6 7 8 9 10.
