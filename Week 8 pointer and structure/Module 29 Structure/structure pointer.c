#include<stdio.h>
struct student
{

    //char name[50];
    //int age;

    double weight;// data type jar beshi take prothome likhbo.

    int roll;
    int age;
};

struct student s;

int main()
{

    struct student s ={.roll=12, .weight= 95.3, .age=25};

    struct student* sp;
    sp = &s;


    printf("size of s variable: %d\n",sizeof(s));

        printf("%d %.2lf %d\n",sp->roll,sp->weight, sp->age);//pontere value print korle eivabe print korte hoy.

    return 0;
}


