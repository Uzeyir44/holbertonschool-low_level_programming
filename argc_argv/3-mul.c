#include "main.h"
#include <stdio.h>

int main(int argc; char *argv[])
{
    int i;
    
    if (argc == 1)
    {
        printf("Error\n");

        return (1);
    }

    i = argv[1] * argv[2];

    printf("%d\n", i);

    return (0);
}