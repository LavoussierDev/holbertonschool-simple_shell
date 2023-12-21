#include "holberton.h"
/**
 * _getenv - gets an environment variable
 * @name: environment variable to get
 * Return: pointer to environment variable or NULL if there is no match
 */
char *_getenv(const char *name)
{
		char **environ_copy;
		char *variable, *value, *path;
		int compare;
		unsigned int path_length, environ_length, length, i;

		environ_length = 0;
		while (environ[environ_length] != NULL)
			environ_length++;
		environ_copy = NULL;
		environ_copy = copy_env(environ_copy, environ_length);


