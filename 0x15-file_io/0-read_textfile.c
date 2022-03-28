#include "main.h"
/**
 * read_textfile - read a text
 * @filename: a filename
 * @letters: text in the file
 * Return: the actual number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t rd;
	ssize_t wt;

	if (filename == NULL)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	rd = read(fd, buff, letters);
	if (rd == -1)
		return (0);
	wt = write(STDOUT_FILENO, buff, rd);
	if (wt == -1)
		return (0);
	if (wt != rd)
		return (0);
	close(fd);
	return (rd);
}
