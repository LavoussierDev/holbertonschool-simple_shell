#include "shell.h"

/**
 * main - simple shell function
 * @ac: count of arguments
 * @av: arguments
 *
 * return: 0
 */

int main(int ac, char **argv)
{
	char *line = NULL;
	char **command = NULL;
	int status;
	(void) ac;

	while (1)
	{
		line = read_line();

		command = tokenizer(line);

		status = _execute(command, argv);
	}
}
