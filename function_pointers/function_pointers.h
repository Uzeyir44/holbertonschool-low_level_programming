#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

int _putchar(char c);  /* prototype for the provided function */
/* calls the function with given parameter */
void print_name(char *name, void (*f)(char *));

#endif
