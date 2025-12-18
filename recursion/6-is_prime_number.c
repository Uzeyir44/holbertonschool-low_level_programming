#include "main.h"

int find_prime(int n, int divide, int count);

int is_prime_number(int n)
{
    if (find_prime(n, 2, 1) > 2)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

int find_prime(int n, int divide, int count)
{
    if (divide == n)
    {
        return (count++);
    }
    else if (n % divide == 0)
    {
        return (find_prime(n; ++divide, ++count));
    }
    else
    {
        return (find_prime(n; ++divide, count));
    }
}
