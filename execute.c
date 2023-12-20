#include "shell.h"
/*
 * _execute - 
 *
 */
int _execute(char **command, char **argv, int idx)
{
	char *full_cmd;
	pid_t child;
	int status = 0;

	full_cmd = _getpath(command[0]);
	if (!full_cmd)
	{
		print_error(argv[0], command[0], idx);
		freearray(command);
		return (128);
	}

	child = fork();
	if (child == 0)
	{
		if (execve(full_cmd, command, environ) == -1)
		{
			freearray(command);
			free(full_cmd), full_cmd = NULL;
		}
	}
	else
	{
		waitpid(child, &status, 0);
		freearray(command);
		free(full_cmd), full_cmd = NULL;
	}

	return (WEXITSTATUS(status));
}
