#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list args;
	unsigned int i;
    char *c;

	if (n != 0)
	{
		va_start(args, n);

		if (!separator)
		{
			for (i = 0; i < n; i++)
			{
				c = va_arg(args, char *);
                if (!c)
                {
                    printf("(nil)");
                }
                else
                {
                    printf("%s", c);
                }
			}
		}
		else
		{
			for (i = 0; i < n - 1; i++)
			{
				c = va_arg(args, char *);
                if (!c)
                {
                    printf("(nil)%s", separator);
                }
                else
                {
                    printf("%s%s", c, separator);
                }
			}

			c = va_arg(args, char *);
            if (!c)
            {
                printf("(nil)");
            }
            else
            {
                printf("%s", c);
            }
		}

		printf("\n");
		va_end(args);
	}
	else
	{
		printf("\n");
	}
}