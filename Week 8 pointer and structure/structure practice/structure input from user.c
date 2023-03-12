#include<stdio.h>


struct family
{
    char name[50];
    int age;
    double height;
    float weight;
    char qualification[10];
};

struct family input_info(int n)
{

    struct family p[n];

    for(int i=0; i<n; i++)
    {
        printf("Enter %d member information:\n",i+1);
        printf("Enter name:\n");
        fflush(stdin);
        gets(p[i].name);

        printf("Enter age:\n");
        scanf("%d",&p[i].age);

        printf("Enter height:\n");
        scanf("%lf",&p[i].height);

        printf("Enter weight:\n");
        scanf("%f", &p[i].weight);

        printf("Enter qualification:\n");

        fflush(stdin);
        gets(p[i].qualification);
    }
}


struct family display_info(int n)
{
    struct family p[n];
    for(int i=0; i<n; i++)
    {
        printf("\n%d member information:---------\n",i+1);

        printf("name = %s\n", p[i].name);

        printf("age = %d\n", p[i].age);

        printf("Height = %0.2lf\n", p[i].height);

        printf("Weight = %0.2f\n", p[i].weight);

        printf("Qualification = %s\n", p[i].qualification);
    }
}
int main()
{
    printf("Enter family members number: ");
    int n;
    scanf("%d",&n);

    input_info(n);
    display_info(n);

    return 0;
}
