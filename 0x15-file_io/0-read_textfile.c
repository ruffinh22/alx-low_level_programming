#include "main.h"

/**
 * read_textfile - func that reads a text file and prints it to the POSIX stdo
 * @filename: pointer to file
 * @letters: number of letters to be printed
 *
 * Return: number of printed letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	int num_of_chars;
	int printed_chars;

	if (filename == NULL || letters == 0)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	num_of_chars = read(fd, buffer, letters);
	if (num_of_chars == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	printed_chars = write(STDOUT_FILENO, buffer, num_of_chars);
	free(buffer);
	close(fd);
	if (printed_chars != num_of_chars)
	{
		return (0);
	}
	return (printed_chars);
}
