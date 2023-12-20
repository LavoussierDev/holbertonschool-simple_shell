#include "main.h"

/**
 * get_user_input - Get user input from the given file stream
 * @file_stream: The file stream to read from
 * Return: A dynamically allocated string containing user input
 */

char *get_user_input(FILE *file_stream)
{
	char *input_line = NULL;
	size_t line_length = 0;
	ssize_t characters_read = getline(&input_line, &line_length, file_stream);

	if (characters_read == -1)
	{
		free(input_line);
		exit(EXIT_SUCCESS);
	}

	return input_line;
}

