#include<stdio.h>

float max_of_three(float x,float y, float z); // proto type function


int main()
{
    float a,b,c;
    int n;
    printf("Enter loop number:\n");

    scanf("%d",&n);
    printf("Enter three integer numbers:\n");

    for(int i=1; i<n; i++)
    {
       scanf("%f %f %f",&a, &b, &c);

    float m = max_of_three(a,b,c);

    printf("The maximum value of three numbers is = %f\n",m);

    }

    return 0;
}


float max_of_three(float x,float y, float z)
{
    float max;
    if(x>y && x>z)
        max=x;
    else if(y>x && y>z)
        max=y;
    else
        max=z;

    return max;
}

