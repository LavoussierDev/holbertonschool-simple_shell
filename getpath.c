#include "holberton.h"
/**
 * _which - searches directories in PATH variable for command
 * @command: to search for
 * @fullpath: full path of command to execute
 * @path: full PATH variable
 * Return: pointer to full_path
 */
char *_which(char *command, char *fullpath, char *path)
{
	unsigned int command_length, path_length, original_path_length;
	char *path_copy, *token;

	command_length = _strlen(command);
	original_path_length = _strlen(path);
	path_copy = malloc(sizeof(char) * original_path_length + 1);
	if (path_copy == NULL)
	{
		errors(3);
		return (NULL);
	}
	_strcpy(path_copy, path);
	/* copy PATH directory + command name and check if it exists */
	token = strtok(path_copy, ":");
	if (token == NULL)
		token = strtok(NULL, ":");
    while (dir)
    {
        full_cmd = malloc(_strlen(dir) + _strlen(command) + 2);
        if (full_cmd != NULL)
        {
            strcpy(full_cmd, dir);
            strcat(full_cmd, "/");
            strcat(full_cmd, command);

            if (stat(full_cmd, &st) == 0)
            {
                free(path_env);
                return full_cmd;
            }
            free(full_cmd), full_cmd = NULL;

            dir = strtok(NULL, ":");
        }
    }

    free(path_env);
    return NULL;
}
