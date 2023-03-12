#include<stdio.h>
struct student
{
    int roll;
    char name[50];
    int age;
    float weight;
};

struct student s;

int main()
{
    int a;
    struct student s = {12,"ariful islam", 24, 75.6};
//    s.roll = 12;
//    s.age = 24;
//    s.weight = 75.6;

    printf("%d \n%s \n%d \n%.2f\n",s.roll, s.name, s.age, s.weight);
    a=7;
    return 0;
}
