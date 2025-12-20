#include "main.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
    int a;
    int b;
    
    if (argc == 1)
    {
        printf("Error\n");

        return (1);
    }

    a = argv[1] - '0';
    b = argv[2] - '0';

    printf("%d\n", a*b);

    return (0);
}