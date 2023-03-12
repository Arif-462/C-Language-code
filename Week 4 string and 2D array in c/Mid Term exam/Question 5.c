/*
Consider the following code.
        char a[10];
		char ch = ‘a’;
		for(i = 0; i<8;i++)
		{
			a[i] = ch+8-i;
		}
		a[8] = ‘\0’;
What will be stored in the given character array ‘a’ of the question after the execution of the block of code?    (10)

*/


#include<stdio.h>
int main()
{
    char a[10];
    char ch = 'a';
    for(int i = 0; i<8; i++)
    {
        a[i] = ch+8-i;
        printf("%c  ",a[i]) ;//i theke suru kore b te asbe.
    }
    a[8] = '\0';

    return 0;
}
