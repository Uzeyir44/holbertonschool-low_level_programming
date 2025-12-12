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
char *_strcat(char *dest, char *src); /* cocatenates two strings */
char *_strncat(char *dest, char *src, int n); /* concatanetes two strings till n character */
char *_strncpy(char *dest, char *src, int n); /* the equal to strncpy */
int _strcmp(char *s1, char *s2); /* compares strings */
void reverse_array(int *a, int n); /* reverse array */
char *string_toupper(char *); /* makes string elements uppercase */
char *cap_string(char *); /* capitalizes the words */
char *leet(char *); /* encode string */
char *_memset(char *s, char b, unsigned int n); /* fills n memory slots with b*/
char *_memcpy(char *dest, char *src, unsigned int n); /* copies n bytes from src to dest*/
char *_strchr(char *s, char c); /* finds character c in s */
unsigned int _strspn(char *s, char *accept); /* returns numbers of initial bytes from s which are similar to accept */

#endif