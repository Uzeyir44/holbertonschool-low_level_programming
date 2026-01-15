#ifndef MAIN_H
#define MAIN_H

/* prototype for the provided function */
int _putchar(char c);
/* structure of our list */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
/* it will print all the values of given list and return the number of nodes */
size_t print_list(const list_t *h);

#endif