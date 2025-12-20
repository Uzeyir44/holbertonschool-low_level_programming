#include "main.h"
#include <stdio.h>
#include <stlib.h>

int main(int argc, char *argv[])
{
    int a;
    int b;
    
    if (argc == 1)
    {
        printf("Error\n");

        return (1);
    }

    a = atoi(argv[1]);
    b = atoi(argv[2]);

    printf("%d\n", a*b);

    return (0);
}