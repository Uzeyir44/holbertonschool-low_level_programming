#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#define BUF_SIZE 1024

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: length
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}

/**
 * main - copies content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to;
	ssize_t r, w;
	char buffer[BUF_SIZE];

	if (argc != 3)
	{
		write(1, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		write(1, "Error: Can't read from file ", 28);
		write(1, argv[1], _strlen(argv[1]));
		write(1, "\n", 1);
		exit(98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		write(1, "Error: Can't write to ", 22);
		write(1, argv[2], _strlen(argv[2]));
		write(1, "\n", 1);
		close(fd_from);
		exit(99);
	}

	while ((r = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		w = write(fd_to, buffer, r);
		if (w == -1 || w != r)
		{
			write(1, "Error: Can't write to ", 22);
			write(1, argv[2], _strlen(argv[2]));
			write(1, "\n", 1);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}

	if (r == -1)
	{
		write(1, "Error: Can't read from file ", 28);
		write(1, argv[1], _strlen(argv[1]));
		write(1, "\n", 1);
		close(fd_from);
		close(fd_to);
		exit(98);
	}

	if (close(fd_from) == -1)
	{
		write(1, "Error: Can't close fd ", 22);
		/* convert fd to string if needed, else print single byte placeholder */
		write(1, "\n", 1);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		write(1, "Error: Can't close fd ", 22);
		/* convert fd to string if needed, else print single byte placeholder */
		write(1, "\n", 1);
		exit(100);
	}

	return (0);
}
