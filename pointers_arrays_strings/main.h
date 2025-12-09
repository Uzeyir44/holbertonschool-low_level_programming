#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);  /* prototype for the provided function */
void reset_to_98(int *n); /* changes the value of variable */
void swap_int(int *a, int *b); /* swaps the value of variables */
int _strlen(char *s); /* returns the length of string */
void _puts(char *str); /* prints string */
void print_rev(char *s); /* prints a string in reverse */
void rev_string(char *s); /* reverses a string */
void puts2(char *str); /* prints the characters of string with step = 2 */
void puts_half(char *str); /* prints the string from the middle */
void print_array(int *a, int n); /* prints the n numbers of an array */
char *_strcpy(char *dest, char *src); /* copies the value of one string to another */
int _atoi(char *s); /* converts string to an integer */

#endif