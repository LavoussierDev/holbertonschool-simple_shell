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
	int i, status = 0;
	(void) ac;

	while (1)
	{
		line = read_line();
		if (line == NULL) /* ctr + D */
		{
			if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "\n", 1);
			return (status);
		}

		command = tokenizer(line);
		if (!command)
			continue;

		status = _execute(command, argv);

		execve fork waitpid
}
