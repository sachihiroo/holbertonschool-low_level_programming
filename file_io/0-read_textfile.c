#include "main.h"
/**
 * read_textfile -  a function that reads a text file and prints it
 * @filename: name of file (char)
 * @letters: size_t
 * Return: 0 or n
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, n = 0;
	char buffer[10240];

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	n = read(fd, buffer, letters);
	write(STDOUT_FILENO, buffer, n);
	close(fd);
	return (n);
}
