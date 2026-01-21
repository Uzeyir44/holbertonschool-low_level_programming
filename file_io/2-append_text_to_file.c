#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * len - Calculates the length of a string
 * @text: String to calculate
 *
 * Return: Length of the string
 */
int len(char *text)
{
	int i;

	for (i = 0; text[i] != '\0'; i++)
		;

	return (i);
}

int append_text_to_file(const char *filename, char *text_content)
{
    int fd;

    if (filename == NULL)
        return (-1);

    fd = open(filename, O_WRONLY | O_APPEND);

    if (fd == -1)
        return (-1);

    if (text_content == NULL)
    {
        return (1);
    }
    else
    {
        write(fd, text_content, len(text_content));
        return (1);
    }
}