#include<stdio.h>

struct point{
    int x;
    int y;
};

int manhattan(struct point p1, struct point p2)
{
    int res = abs(p1.x - p2.x)+abs(p1.y - p2.y);
    return res;

}

int main(void)
{
    struct point p1;
    struct point p2;
    printf("Enter distance for p1 and p2:\n");
    scanf("(%d, %d)\n",&p1.x, &p1.y);
    scanf("(%d, %d)",&p2.x, &p2.y);

    int ans = manhattan(p1,p2);
    printf("Manhattan distance %d\n",ans);
    return 0;
}
