#include "main.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
    int sum;
    int i;
    int j;

    sum = 0;
    
    if (argc == 1)
    {
        printf("0\n");

        return (0);
    }

    for (i = 1; i < argc; i++)
    {
        for (j = 0; argv[i][j] != '\0'; j++)
        {
            if (argv[i][j] < '0' || argv[i][j] > '9')
            {
                printf("Error\n");
                return (1);
            }
        }

        sum += argv[i];
    }

    printf("%d\n", sum);
    return (0);
}