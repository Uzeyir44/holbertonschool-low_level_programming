#include "main.h"
#include <stdio.h>

void print_diagsums(int *a, int size)
{
    int sum1;
    int sum2;
    int i;
    int j;

    for (i = 0; i < size * size; i = i + size + 1)
    {
        sum1 = sum1 + a[i];
    }

    for (j = size * size - size + 1; i > 0; i = i - size + 1)
    {
        sum2 = sum2 + a[i];
    }

    printf("%d, %d", sum1, sum2);
}