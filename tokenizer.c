#include "shell.h"

char **tokenizer(char *line)
{
	char *token = NULL, *tmp = NULL;
	char **command = NULL;
	int cpt = 0;
	int i = 0;
	int error_flag = 0;

	if (!line)
		return (NULL);
	tmp = _strdup(line);

	token = strtok(tmp, DELIM);
	if (token == NULL)
	{
		free(line), tmp = NULL;
		free(tmp), tmp = NULL;
		return (NULL);
	}

	while (token)
	{
		cpt++;
		token = strtok(NULL, DELIM);
	}
	free(tmp);

	command = malloc(sizeof(char *) * (cpt + 1));
	if (!command)
	{
		free(line);
		return (NULL);
	}

	token = strtok(line, DELIM);
	while (token)
	{
		command[i] = _strdup(token);
		if (command[i] == NULL)
		{
			error_flag = 1;
			break;
		}

		token = strtok(NULL, DELIM);
		i++;
}
free(line);

if (error_flag)
{
	while (i > 0)
		free(command[--i]);
	free(command);
	return NULL;
}
command[i] = NULL;

return (command);
}
