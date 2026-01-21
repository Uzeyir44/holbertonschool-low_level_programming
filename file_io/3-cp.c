#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

void file_from_open(char *filename, int checker)
{
    if (checker == -1)
    {
        dprintf(2, "Error: Can't read from file %s\n", filename);
        fsync(2);
        exit(98);
    }
}

void file_from_read(char *filename, ssize_t checker)
{
    if (checker == -1)
    {
        dprintf(2, "Error: Can't read from file %s\n", filename);
        fsync(2);
        exit(98);
    }
}

void file_to_open(char *filename, int checker)
{
    if (checker == -1)
    {
        dprintf(2, "Error: Can't write to %s\n", filename);
        fsync(2);
        exit(99);
    }
}

void file_to_write(char *filename, ssize_t checker)
{
    if (checker == -1)
    {
        dprintf(2, "Error: Can't write to %s\n", filename);
        fsync(2);
        exit(99);
    }
}

void close_checker(int descrip, int close_value)
{
    if (close_value == -1)
    {
        dprintf(2, "Error: Can't close fd %d\n", descrip);
        fsync(2);
        exit(100);
    }
}

void cp(int argc, char **argv)
{
    char buf[1024];
    int fd1;
    int fd2;
    ssize_t read1;
    ssize_t write2;
    int close_file;

    if (argc != 3)
    {
        dprintf(2, "Usage: cp file_from file_to\n");
        exit(97);
    }

    fd1 = open(argv[1], O_RDONLY);
    file_from_open(argv[1], fd1);

    fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    file_to_open(argv[2], fd2);

    while ((read1 = read(fd1, buf, 1024)) > 0)
    {
	    write2 = write(fd2, buf, read1);
	    file_to_write(argv[2], write2);
    }

    file_from_read(argv[1], read1);


    close_file = close(fd1);
    close_checker(fd1, close_file);
    
    close_file = close(fd2);
    close_checker(fd2, close_file);
}

int main(int argc, char **argv)
{
	cp(argc, argv);
	return (0);
}