#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 *
 * @filename: Pointer to the file to print
 * @letters: Number of letters to print from file
 *
 * Description: Reads a text file and prints it to the POSIX stadnard output
 *
 * Return: Number of letters printed (int) or if it fails (0)
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int num_char = 0;
	int fd, bytes_read, bytes_written;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(buffer);
		return (0);
	}

	bytes_read = read(fd, buffer, sizeof(buffer));
	if (bytes_read < 0)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written < 0)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	num_char += bytes_written;
	close(fd);
	return (num_char);
}
