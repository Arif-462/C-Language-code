/*To declare a string, Fahim uses the following code.
What will happen in the second and the third statement.
Explain.	                                                (10)

	char a[10];
	a[0] = 98;
	a[1] = 97;
	a[2] = 'n';
	a[3] = 'a';
	a[4] = 'n';
	a[5] = 'a';
	a[6] = ‘\0’;

*/

#include<stdio.h>
int main()
{
    char a[10];
	a[0] = 98; // ascii value of b.
	a[1] = 97; // ascii value of a.
	a[2] = 'n';
	a[3] = 'a';
	a[4] = 'n';
	a[5] = 'a';
	a[6] = '\0';


	printf("%s ",a);







    return 0;
}
