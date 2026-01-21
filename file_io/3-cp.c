#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int file_from_open(char *filename, int checker)
{
    if (checker == -1)
    {
        exit(98);
        dprintf(2, "Error: Can't read from file %s\n", filename);
        return (1);
    }

    return (0);
}

int file_from_read(char *filename, ssize_t checker)
{
    if (checker == -1)
    {
        exit(98);
        dprintf(2, "Error: Can't read from file %s\n", filename);
        return (1);
    }

    return (0);
}

int file_to_open(char *filename, int checker)
{
    if (checker == -1)
    {
        exit(99);
        dprintf(2, "Error: Can't write to %s\n", filename);
        return (1);
    }

    return (0);
}

int file_to_write(char *filename, ssize_t checker)
{
    if (checker == -1)
    {
        exit(99);
        dprintf(2, "Error: Can't write to %s\n", filename);
        return (1);
    }

    return (0);
}

int close_checker(int descrip, int close_value)
{
    if (close_value == -1)
    {
        exit(100);
        dprintf(2, "Error: Can't close fd %d", descrip);
        return (1);
    }

    return (0);
}

void cp(int argc, char **argv)
{
    char buf[1024];
    int fd1;
    int fd2;
    ssize_t read;
    ssize_t write;
    int close;

    if (argc != 3)
    {
        exit(97);
        dprintf(2, "Usage: cp file_from file_to\n");
    }

    fd1 = open(argv[1], O_RDONLY);
    if (file_from_o_r(argv[1], fd1))
        return;

    fd2 = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
    if (file_to_open(argv[2], fd2))
        return;

    read = read(fd1, buf, 1024);
    if (file_from_read(argv[1], read))
        return;
    
    write = write(fd2, buf, read);
    if (file_to_write(argv[2], write));
        return;

    close = close(fd1);
    if (close_checker(fd1, close))
        return;
    close = close(fd2);
    if (close_checker(fd2, close))
        return;
}