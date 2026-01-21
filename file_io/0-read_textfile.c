#include "main.h"
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
    if (filename == NULL)
        return (0);

    int fd = open(filename, O_RDONLY);
    
    if (fd == -1)
        return (0);
    
    char *buf = malloc(letters);
    ssize_t bytes_read = read(fd, buf, letters);

    if (bytes_read == -1)
    {
        free(buf);
        close(fd);
        return (0);
    }

    ssize_t bytes_written = write(STDOUT_FILENO, buf, bytes_read);
    free(buf);
    clode(fd);

    if (bytes_read != bytes_written)
        return (0);
    
    return (bytes_written);
}