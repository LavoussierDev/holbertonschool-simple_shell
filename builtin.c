#include "holberton.h"
/**
**builtin_execute - executes the built in functions
**@tokens: arguments being passed
**Return: tokens
**/
int builtin_execute(char **tokens)
{
	int status;
	unsigned int length;
	unsigned int num;
	unsigned int i;

	built_s builtin[] = {
		{"exit", shell_exit},
		{"env", shell_env},
		{NULL, NULL}
	};
	
	if (tokens[0] == NULL)
		return (1);

	length = _strlen(tokens[0]);

	num = shell_num_builtins(builtin);
	for (i = 0; i < num; i++)
	{
		if (_strcmp(tokens[0], builtin[i].name, length) == 0)
		{
			status = (builtin[i].p)();
			return (status);
		}
	}
	return (1);
}
void print_env(char **command, int *status)
{
        int i;

        for (i = 0; environ[i]; i++)
        {
                write(STDOUT_FILENO, environ[i], _strlen(environ[i]));
                write(STDOUT_FILENO, "\n", 1);
        }
        freearray(command);
        *status = 0;
}
