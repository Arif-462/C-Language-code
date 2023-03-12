#include<stdio.h>
struct student
{
    int roll;
    char name[50];
    double marks;
};

void printstudents_information(int n, struct student s)
{
    printf("\ninformation of student %d\n",n);
    printf("Roll = %d\n",s.roll);
    printf("Name = %s\n",s.name);
    printf("Marks = %lf\n",s.marks);
}
int main()
{

    int n;
    printf("Enter students number: ");
    scanf("%d",&n);

    struct student cls[n];

    for(int i=1; i<=n; i++)
    {
        printf("Enter %d students roll\n",i);
        scanf("%d",&cls[i].roll);
        printf("Enter %d students name\n",i);
        scanf("%s",cls[i].name);
        printf("Enter %d students marks\n",i);
        scanf("%lf",&cls[i].marks);
    }


    int sum=0;
    for(int i=1; i<=n; i++)
    {
        if(cls[i].roll % 2 ==0)
        {
            printstudents_information(i, cls [i]);
            sum = sum+cls[i].marks;
        }
    }
    printf("Total marks = %d\n",sum);
    return 0;
}
