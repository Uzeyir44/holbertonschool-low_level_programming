#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/* prototype for the provided function */
int _putchar(char c);
/* sums all the variables assigned to the function and returns its */
int sum_them_all(const unsigned int n, ...);
/* prints given number with separator */
void print_numbers(const char *separator, const unsigned int n, ...);
/* prints strings */
void print_strings(const char *separator, const unsigned int n, ...);
/* prints the arguments with their types, analogy of printf */
void print_all(const char * const format, ...);
/* structure for print_all function */
struct table
{
    char type;
    void (*func)(va_list);
};
/* prints int type */
void print_int(va_list);
/* prints char type */
void print_char(va_list);
/* prints string type */
void print_string(va_list);
/* prints float type */
void print_float(va_list);

#endif
