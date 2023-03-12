#include<stdio.h>
struct student
{

    //char name[50];
    //int age;
    double weight;// data type jar beshi take prothome likhbo.
    int age;
    int roll;
};

struct student s;

int main()
{

    struct student s[10]; // data type jar beshi take prothome likhbo.
//    s[0].roll = 11;
//    s[0].weight = 55.9;
//    printf("%d %.2f\n", s[0].roll, s[0].weight);
//     s[1].roll = 12;
//    s[1].weight = 65.9;
//    printf("%d %.2f\n", s[1].roll, s[1].weight);
//     s[2].roll = 13;
//    s[2].weight = 75.9;
//    printf("%d %.2f\n", s[2].roll, s[2].weight);


    for(int i=0; i<10; i++)
    {
        s[i].roll=11+i;
        s[i].weight=55.9+i*3.3;
    }
    for(int i=0; i<10; i++)
    {
        printf("%d %.2f\n", s[i].roll, s[i].weight);

    }






    return 0;
}

