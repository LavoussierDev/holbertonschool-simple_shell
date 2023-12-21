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

void handle_builtin(char **command, char **argv, int *status, int idx)
{
        (void) argv;
        (void) idx;

        if (_strcmp(command[0], "exit") == 0)
                exit_shell(command, status);

        else if (_strcmp(command[0], "env") == 0)
                print_env(command, status);
}

void exit_shell(char **command, int *status)
{
        freearray(command);
        exit(*status);
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
