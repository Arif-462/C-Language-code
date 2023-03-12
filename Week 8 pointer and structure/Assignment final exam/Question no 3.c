// pass by value
/*
#include<stdio.h>
void swap(int n, int m)
{
    int temp=n;
    n=m;
    m=temp;
    printf("n = %d and m =%d\n", n, m);

}
int main()
{
    int a,b;
    scanf("%d %d",&a, &b);

    swap(a,b);
    printf("a = %d and b= %d",a,b);

    return 0;
}

*/
// pass by references
#include<stdio.h>
void swap(int* n, int* m)
{
    int temp=*n;
    *n=*m;
    *m=temp;
    printf("n = %d and m =%d\n", *n, *m);

}
int main()
{
    int a,b;
    scanf("%d %d",&a, &b);

    swap(&a,&b);
    printf("a = %d and b= %d",a,b);

    return 0;
}
