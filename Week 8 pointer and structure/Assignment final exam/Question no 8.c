#include<stdio.h>

struct student{
    char name[20];
    int roll;
    float marks;
}a;

 //struct student a;

struct student input_info()
{

    printf("Enter information:\n");
    printf("Enter name: ");
    fflush(stdin);
    gets(a.name);
    printf("Enter roll number: ");
    scanf("%d",&a.roll);
    printf("Enter marks: ");
    scanf("%f",&a.marks);

}
struct student display_info()
{
    //struct student a;
    printf("\n\nDisplaying Iformation:\n");
    printf("Name: %s\n",a.name);
    printf("Roll number: %d\n",a.roll);
    printf("Marks: %0.2f\n",a.marks);
}
int main()
{

    input_info();
    display_info();


    return 0;
}
