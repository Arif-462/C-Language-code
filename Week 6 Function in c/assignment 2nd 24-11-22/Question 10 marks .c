#include<stdio.h>

int grade_of_marks(int x)
{
    if(x>=80 && x<=100)
       return 'A';

    else if(x>=60 && x<=79)
       return 'B';

    else if(x>=40 && x<=59)
        return 'C';

    else if(x>=0 && x<=39)
         return 'F';

}

int main(void)
{
    int n;
    scanf("%d",&n);
    int result = grade_of_marks(n);
    printf("%c\n",result);

    return 0;
}
