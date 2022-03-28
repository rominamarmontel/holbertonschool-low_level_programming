#include "main.h"
/**
 * create_file - create a file
 * @filename: filename
 * @text_content: text
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int i;
	int wt = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		wt = write(fd, text_content, i);
	}
	if (wt == -1)
		return (-1);
	close(fd);
	return (1);
}
