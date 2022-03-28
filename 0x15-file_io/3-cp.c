#include "main.h"

/**
 * main - copy from file to file
 * @argc: the number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char buffer[1024];
	int file_from, file_to, close_from, close_to;
	int wt, rd;

	if (argc != 3)
		exit(97);
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		exit(98);
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
		file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
		if (file_to == -1)
			exit(99);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			while ((rd = read(file_from, buffer, 1024)) > 0)
			{
				wt = write(file_to, buffer, rd);
				if (wt != rd || wt == -1)
					exit(99);
				dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			}
		if (rd == -1)
			exit(98);
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
		close_from = close(file_from);
		if (close_from == -1)
			exit(100);
			dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", file_from);
		close_to = close(file_to);
		if (close_to == -1)
			exit(100);
			dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", file_to);
		return (0);
}
