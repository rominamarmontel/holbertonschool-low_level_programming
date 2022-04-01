#include <stdio.h>
#include <stdlib.h>

/**
 * getline - get a line from a stream
 * @line: string
 * @len: length
 * @lineSize: size of length
 */

int main(void)
{
	printf("$ ");
	char *line = NULL;
	size_t len = 0;
	ssize_t lineSize = 0;

	while ((lineSize = getline(&line, &len, stdin)) > 0)
		fwrite(line, lineSize, 1, stdout);
	printf("%s \n", line);
	free(line);
	return 0;
}
