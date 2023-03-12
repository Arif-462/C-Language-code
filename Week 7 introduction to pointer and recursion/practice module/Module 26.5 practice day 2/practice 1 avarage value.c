#include<stdio.h>
int main(void)
{
    int x, y, *p, *q;
    scanf("%d %d", &x, &y);
    p=&x;
    q=&y;
    float sum = *p + (float)*q;
    float avg=sum/2;

    printf("%0.3f\n",avg);

    return 0;
}
