#include "shell.h"

int _execute(char **command, char **argv)
{
	pid_t child;
	int status;

	child = fork();
	if (child == 0)
	{
		if(execve(command[0], command, environ) == -1)
		{
			perror(argv[0]);
			freearray(command);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		waitpid(child, &status, 0);
		freearray(command);
	}
	if (WIFEXITED(status))
		return WEXITSTATUS(status);
	else
		return EXIT_FAILURE;
}
