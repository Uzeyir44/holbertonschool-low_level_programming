#include "main.h"

int work(int n, int c);

int work(int n, int c)
{
    if (c * c == n)
    {
        return (c);
    }
    else if (c * c > n)
    {
        return (-1);
    }

    work(n , c+1);

}

int _sqrt_recursion(int n)
{
    int a;
    
    a = work(n, 0);
    return (a);
}