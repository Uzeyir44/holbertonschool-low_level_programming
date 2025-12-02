#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *main - returs value
 *
 *Return: returns 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int a = n % 10;
    if (a > 5)
    {
        printf("Last digit of %d is %d and is greater than 5\n", n, a);
    }
    else
    {
        if (a == 0)
        {
            printf("Last digit of %d is %d and is 0\n", n, a);
        }
        else
        {
            printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);
        }
    }
	return (0);
}