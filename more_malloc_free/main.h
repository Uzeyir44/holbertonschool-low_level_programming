#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);  /* prototype for the provided function */
void *malloc_checked(unsigned int b); /* allocates n bytes in the memmory */
char *string_nconcat(char *s1, char *s2, unsigned int n); /* concatonates s1 and n first characters of s2 */
void *_calloc(unsigned int nmemb, unsigned int size); /* creates a pointer to array with nmemb elements each size bytes  */
int *array_range(int min, int max); /* creates a pointer to an array with characters from min to max */

#endif