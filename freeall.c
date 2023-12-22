#include "shell.h"

/**
 * free_all - frees all mallocd space
 * @tokens: pointer to tokens array
 * @path: pointer to path
 * @line: pointer to user input
 * @fullpath: pointer to full path
 * @flag: flag marking for fullpath malloc
 * Return: void
 */
void free_all(char **tokens, char *path, char *line, char *fullpath, int flag)
{
	free(path);
	free(tokens);
	free(line);
	if (flag == 1)
		free(fullpath);
}

/**
 * free_dp - free double pointer
 * @array: double pointer to free
 * @length: length of double pointer
 * Return: void
 */
void free_dp(char **array, unsigned int length)
{
	unsigned int i;

	for (i = 0; i < length; i++)
	{
		free(array[i]);
	}
	free(array);
}

