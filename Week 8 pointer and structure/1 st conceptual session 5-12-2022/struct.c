#include<stdio.h>
struct person
{
    int age;
    float salary;
};
struct person p1,p2;
int main()
{

    p1.age= 30;
    p1.salary=28000;
    printf("Age = %d\n",p1.age);
    printf("salary = %.5f\n",p1.salary);

    p2.age= 30;
    p2.salary=28000;
    printf("Age = %d\n",p2.age);
    printf("salary = %.5f\n",p2.salary);
    return 0;
}
