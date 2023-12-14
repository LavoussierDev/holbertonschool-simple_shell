#include "shell.h"

char *read_line(void)
{
	char *line = NULL;
	size_t _len = 0;
	ssize_t n;

	write(STDOUT_FILENO, "$ ", 2);
	n = getline(&line, &len, stdin);
	if (n == -1) /*added the "end of file" condition*/
	{
		free(line);
		return (NULL);
	}

	return (line);

}
