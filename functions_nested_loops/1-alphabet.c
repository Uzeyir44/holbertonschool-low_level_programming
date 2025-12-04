#include "main.h"

void print_alphabet(void)
{
    char c;

    for (c = 'a'; c <= 'z'; c++)
    {
        _putchar(c);
    }
    _putchar('\n');
    return;
}

int main(void)
{
    print_alphabet();
    return (0);
}
