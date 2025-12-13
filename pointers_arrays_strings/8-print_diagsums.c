#include "main.h"
#include <stdio.h>

void print_diagsums(int *a, int size)
{
    int sum1;
    int sum2;
    int i;

    for (i = 0; i < size; i++)
    {
        sum1 = sum1 + a[i][i];
    }

    for (size = size - 1; size >= 0; size--)
    {
        sum2 = sum2 + a[size][size];
    }

    printf("%d, %d", sum1, sum2);
}