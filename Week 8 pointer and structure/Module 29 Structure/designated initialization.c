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
    struct student s1 = {.roll=12, .name="ariful islam", .age=24, .weight=75.90};//designation initialization.    struct student s2 = {12,"shoriful islam", 24, 75.6};
    //s.roll = 12;
    //s.name = "ariful islam";// eivabe declaration kora jayna. but line 15 kora jabe.
    //s.age = 24;
    //s.weight = 75.6;
    printf("Student 1 info:\n");
    printf("%d \n%s \n%d \n%.2f\n",s1.roll, s1.name, s1.age, s1.weight);
     printf("\n\nStudent 2 info:\n");
    printf("%d \n%s \n%d \n%.2f\n",s2.roll, s2.name, s2.age, s2.weight);
    a=7;
    return 0;
}


