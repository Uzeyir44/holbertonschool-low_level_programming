#include "main.h"

void reverse_array(int *a, int n)
{
    int b;
    int i;
    int c;

    c = (n + 1) / 2;

    for (i = 0; i < c; i++)
    {
        b = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = b;
    }
}
