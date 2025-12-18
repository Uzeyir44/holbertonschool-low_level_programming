#include "main.h"

int find_prime(int n, int divide, int count);

int is_prime_number(int n)
{
    if (find_prime(n, 2, 1) > 2)
    {
        return (0);
    }
    else
    {
        return (1);
    }
}

int find_prime(int n, int divide, int count)
{
    if (n <= 1)
    {
        return (3);
    }
    if (divide == n)
    {
        return (count + 1);
    }
    else if (n % divide == 0)
    {
        return (find_prime(n, divide + 1, count + 1));
    }
    else
    {
        return (find_prime(n, divide + 1, count));
    }
}
