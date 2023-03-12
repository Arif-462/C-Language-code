#include<stdio.h>
void print(int x)
{
    if(x>0)
    {
        print(x-1);
        printf("%d ",x);

    }
}

int main()
{
    int n=4;
    print(n);

}

