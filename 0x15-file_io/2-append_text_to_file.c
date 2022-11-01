#include "main.h"

/**
 * append_text_to_file - func that appends text at the end of a file
 * @filename: points to the file
 * @text_content: content to be appended
 *
 * Return: 1 on success, -1 otherwise.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int len_content;
	int writen_bits;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		len_content = strlen(text_content);
		writen_bits = write(fd, text_content, len_content);
		if (writen_bits == -1)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}
