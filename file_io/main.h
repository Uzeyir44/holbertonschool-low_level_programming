#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <unistd.h>

/* prototype for the provided function */
int _putchar(char c);
/* reads and writes the data in stdout */
ssize_t read_textfile(const char *filename, size_t letters);
/* creates a new file and writes data into it */
int create_file(const char *filename, char *text_content);
/* returns the length of string */
int len(char *text);
/* adds data to the end of the file if it exists */
int append_text_to_file(const char *filename, char *text_content);
/* copies data from one file to another */
void cp(int argc, char **argv);
/* checks if the copied file was opened correctly */
int file_from_open(char *filename, int checker);
/* checks if the copied file was read correctly */
int file_from_read(char *filename, ssize_t checker);
/* checks if file to which we copy opens correctly */
int file_to_open(char *filename, int checker);
/* checks if the file to which copy writes correctly */
int file_to_write(char *filename, ssize_t checker);
/* checks if the file was closed correctly */
int close_checker(int descrip, int close_value);

#endif
