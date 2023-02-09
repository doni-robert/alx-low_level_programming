#include "main.h"

/**
 * _close - closes a file descriptor
 *
 * @fd: file descriptor to be closed
 *
 */
void _close(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cant close fd %i\n", fd);
			exit(100);
	}
}

/**
 * create_buffer - creates and initializes a buffer
 *
 * Return: the created buffer
 */

char *create_buffer()
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
		return (NULL);
	return (buffer);
}

/**
 * main - copies content from one file to another
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: error code if error
 */

int main(int argc, char **argv)
{
	char *buffer;
	int from, to, r, w;

	buffer = create_buffer();
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);

	if (from == -1 || r == -1)
	{
		dprintf(STDERR_FILENO, "Can't read from file %s\n", argv[1]);
		exit(98);
	}

	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		w = write(to, buffer, r);
		if  (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Can't write to file %s\n", argv[2]);
			exit(99);
		}
		if (r == 1024)
		{
			r = read(from, buffer, 1024);
			to = open(argv[2], O_WRONLY | O_APPEND);
			w = write(to, buffer, r);
		}
	} while (r == 1024);
	_close(from);
	_close(to);
	free(buffer);

	return (0);
}
