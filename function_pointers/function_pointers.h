#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/* prototype for the provided function */
int _putchar(char c);
/* calls the function with given parameter */
void print_name(char *name, void (*f)(char *));

#endif
