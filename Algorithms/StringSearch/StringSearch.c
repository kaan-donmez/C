#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{

    char str[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";
    char sub[] = "do";

    for (int i = 0; str[i]; i++)
    {
        str[i] = tolower(str[i]);
    }

    char *p1, *p2, *p3;
    int i = 0, j = 0, flag = 0;

    p1 = str;
    p2 = sub;

    for (i = 0; i < strlen(str); i++)
    {
        if (*p1 == *p2)
        {
            p3 = p1;
            for (j = 0; j < strlen(sub); j++)
            {
                if (*p3 == *p2)
                {
                    p3++;
                    p2++;
                }
                else
                    break;
            }
            p2 = sub;
            if (j == strlen(sub))
            {
                flag = 1;
                printf("\nSubstring found at index : %d\n", i);
            }
        }
        p1++;
    }
    if (flag == 0)
    {
        printf("Substring NOT found");
    }
    return (0);
}
