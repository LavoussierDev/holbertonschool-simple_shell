@include "shell.h"

char *read_line(void)
{
	char *line = NULL;
	size_t len = 0;
	sszize_t n;

	n= getline(&line, &len, stdin);

	return (line);
}
