#include<stdio.h>
struct person
{
    int age;
    float salary;
};

void display (struct person p)
{
    printf("Age = %d\n",p.age);
    printf("salary = %.5f\n",p.salary);
}
int main()
{
    struct person pi,p2;
    pi.age= 30;
    pi.salary=28000;

    display (pi);
    p2.age= 30;
    p2.salary=28000;
    display (p2);
    return 0;
}

