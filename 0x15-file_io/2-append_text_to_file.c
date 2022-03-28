#include "main.h"

/**
 * append_text_to_file - append text to file
 * @filename: filename
 * @text_content: text
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int i;
	int wt = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
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
