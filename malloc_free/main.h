#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);  /* prototype for the provided function */
char *create_array(unsigned int size, char c); /* creates an array with particular size and element */
char *_strdup(char *str); /* creates a duplicate of a string */
char *str_concat(char *s1, char *s2); /* creates a pointer to the  cocanotation of two strings */
int **alloc_grid(int width, int height); /* creates two dimensial arrays */
void free_grid(int **grid, int height); /* frees given row in array */

#endif
