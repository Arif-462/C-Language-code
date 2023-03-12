#include<stdio.h>

struct point{
    float x;
    float y;
};

struct triangle
{
    struct point p1;
    struct point p2;
    struct point p3;

};

struct point centroid(struct triangle t)
{
    struct point ans;
    ans.x = (t.p1.x+t.p2.x+t.p3.x)/3;
    ans.y = (t.p1.y+t.p2.y+t.p3.y)/3;
    return ans;
};

int main(void)
{
    struct point a = {1,1};
    struct point b = {4,5};

    struct point c ={1,5};
    struct triangle t = {a,b,c};
    struct point cen=centroid( t);


    printf("The centroid of triangle = %0.2f, %0.2f\n",cen.x, cen.y);
    return 0;
}

