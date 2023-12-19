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
	int i, status = 0;
	(void) ac;
	(void) argv;

	while (1)
	{
		line = read_line();
		if (line == NULL)
		{
			if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "\n", 1);
			return (status);
		}
		
		command = tokenizer(line);
		if (!command)
			continue;

		for (i = 0; command[i]; i++)
		{
			printf("%s\n", command[i]);
			free(command[i]), command[i] = NULL;
		}
		free(command), command = NULL;




		/*status = _execute(command, argv);*/
	}
}
