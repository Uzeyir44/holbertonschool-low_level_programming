#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * len - returns length of a string
 * @text: string
 *
 * Return: length
 */
int len(char *text)
{
	int i;

	for (i = 0; text[i] != '\0'; i++)
		;

	return (i);
}

/**
 * file_from_open - checks open error for source file
 * @filename: file name
 * @checker: return value of open
 */
void file_from_open(char *filename, int checker)
{
	if (checker == -1)
	{
		write(2, "Error: Can't read from file ", 28);
		write(2, filename, len(filename));
		write(2, "\n", 1);
		exit(98);
	}
}

/**
 * file_from_read - checks read error
 * @filename: file name
 * @checker: return value of read
 */
void file_from_read(char *filename, ssize_t checker)
{
	if (checker == -1)
	{
		write(2, "Error: Can't read from file ", 28);
		write(2, filename, len(filename));
		write(2, "\n", 1);
		exit(98);
	}
}

/**
 * file_to_open - checks open error for destination file
 * @filename: file name
 * @checker: return value of open
 */
void file_to_open(char *filename, int checker)
{
	if (checker == -1)
	{
		write(2, "Error: Can't write to ", 22);
		write(2, filename, len(filename));
		write(2, "\n", 1);
		exit(99);
	}
}

/**
 * file_to_write - checks write error
 * @filename: file name
 * @checker: return value of write
 */
void file_to_write(char *filename, ssize_t checker)
{
	if (checker == -1)
	{
		write(2, "Error: Can't write to ", 22);
		write(2, filename, len(filename));
		write(2, "\n", 1);
		exit(99);
	}
}

/**
 * close_checker - checks close error
 * @descrip: file descriptor
 * @close_value: return value of close
 */
void close_checker(int descrip, int close_value)
{
	if (close_value == -1)
	{
		write(2, "Error: Can't close fd ", 22);
		write(2, &descrip, 1);
		write(2, "\n", 1);
		exit(100);
	}
}

/**
 * cp - copies file content
 * @argc: argument count
 * @argv: argument vector
 */
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
		write(2, "Usage: cp file_from file_to\n", 28);
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

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	cp(argc, argv);
	return (0);
}
