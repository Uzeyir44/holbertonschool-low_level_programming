#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

int _putchar(char c);  /* prototype for the provided function */
void print_name(char *name, void (*f)(char *)); /* calls the function with given parameter */

#endif