#include "shell.h"
#include <stdio.h>

/*
 * main - main function for simple shell
 * @ac: argument count
 * @av: number of arguments
 *
 * Return: 0 always.
 */

int main(int ac, char **argv)
{
	char *line = NULL;
	char **command = NULL;
	int status = 0;
	(void) ac;

	while (1)
	{
		line = read_line();
		if (line == NULL)
			return (status);

		command = tokenizer(line);

		status = _execute(command, argv);
	}
}
