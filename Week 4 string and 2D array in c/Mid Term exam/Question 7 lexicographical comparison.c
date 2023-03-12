#include <stdio.h>
#include <string.h>

int main()
{
    char s[5][20] = {{"phitron"},{"programming"},{"course"},{"for"},{"beginers"}};

    //Here the initial order of this strings.
    printf("\nInitial order of the string: \n\n");
    for (int i = 0; i < 5; ++i)
    {
        printf("%s\n", s[i]);
    }

    char temp[50];

    for (int i = 0; i < 5; ++i)
    {
        for (int j = i + 1; j < 5; ++j)
        {
            if (strcmp(s[i], s[j]) > 0)
            {
                strcpy(temp, s[i]);
                strcpy(s[i], s[j]);
                strcpy(s[j], temp);
            }
        }
    }

    //Here the lexicographical order of the geven string
    printf("\nStrings in the lexicographical order: \n\n");
    for (int i = 0; i < 5; ++i)
    {
        printf("%s\n", s[i]);
    }

    return 0;
}

