#include<stdio.h>
struct my_family
{
    char name[50];
    int age;
    double height;
    char qualification[5];
};
int main()
{

    struct my_family p1;
    struct my_family p2;
    struct my_family p3;
    struct my_family p4;

    printf("Information for 1st person\n");
    strcpy(p1.name,"Md ariful islam");
    p1.age = 34;
    p1.height = 5.7;
    strcpy(p1.qualification, "BBA");

    printf("Information for 2nd person\n");
    strcpy(p2.name,"Md shoriful islam");
    p2.age = 30;
    p2.height = 5.5;
    strcpy(p2.qualification, "primary");

    printf("Information for 3rd person\n");
    strcpy(p3.name,"Mst amena khatun");
    p3.age = 20;
    p3.height = 5.00;
    strcpy(p3.qualification, "CSE");

    printf("Information for 1st person\n");
    strcpy(p4.name,"Md Jakir Hossain");
    p4.age = 19;
    p4.height = 5.00;
    strcpy(p4.qualification, "B.Hon's");


    printf("Person details:---\n");


    printf("Person name: %s\n", p1.name);
    printf("Person age: %d\n",p1.age);
    printf("Person height: %0.2lf\n",p1.height);
    printf("Person qualification: %s\n",p1.qualification);

    printf("\nPerson details:---\n");

    printf("Person name: %s\n", p2.name);
    printf("Person age: %d\n",p2.age);
    printf("Person height: %0.2lf\n",p2.height);
    printf("Person qualification: %s\n",p2.qualification);

    printf("\nPerson details:---\n");

    printf("Person name: %s\n", p3.name);
    printf("Person age: %d\n",p3.age);
    printf("Person height: %0.2lf\n",p3.height);
    printf("Person qualification: %s\n",p3.qualification);

    printf("\nPerson details:---\n");

    printf("Person name: %s\n", p4.name);
    printf("Person age: %d\n",p4.age);
    printf("Person height: %0.2lf\n",p4.height);
    printf("Person qualification: %s\n",p4.qualification);


    return 0;
}
