#include<stdio.h>

int main()
{
    char ch;

    // assigning a letter to ch

    printf("Enter the Character: ");
    scanf("%c", &ch);

    // print the entered character ASCII value.

    printf("\nThe ASCII Value of %c is %d\n", ch, ch);

    return 0;
}
