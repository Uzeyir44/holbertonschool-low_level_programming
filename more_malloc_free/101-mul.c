#include "main.h"
#include <stdio.h>

int main(argc, **argv)
{
    int i, j;
    
    if (argc != 3)
    {
        printf("Error\n");
        exit(98);
    }

    for (i = 1; i <= 2; i++)
    {
        for (j = 0, argv[i][j] != '\0'; j++)
        {
            if (argv[i][j] < '0' && argv[i][j] > '9')
            {
                printf("Error\n");
                exit(98);
            }
        }
    }

    printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
    return (0);
}