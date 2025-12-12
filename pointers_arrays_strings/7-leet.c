#include "main.h"

char *leet(char *p)
{
    int i;
    int j;
    char a[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
    char b[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

    for (i = 0; p[i] != '\0'; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (p[j] == a[j])
            {
                p[j] = b[j];
                break;
            }
        }
    }
}