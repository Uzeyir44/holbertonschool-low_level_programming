#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <unistd.h>

/* prototype for the provided function */
int _putchar(char c);
/* reads and writes the data in stdout */
ssize_t read_textfile(const char *filename, size_t letters);

#endif
