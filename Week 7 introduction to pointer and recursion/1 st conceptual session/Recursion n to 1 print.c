#include<stdio.h>
void print(int x)
{
    if(x>0)
    {
        printf("%d ",x);
        print(x-1);
    }
}

int main()
{
    int n=4;
    print(n);

}

