#include "main.h"

typedef struct FileData{
	int file_descriptor;
	ssize_t bytes_read;
	char *buffer;
} FileData;

/**
 * execute_command - Execute a given command
 * @command: Command to execute
 * @buffer_size: Size of the buffer
 * Return: Number of characters printed
 */

ssize_t execute_command(const char *command, size_t buffer_size)
{
	int file_descriptor;
	ssize_t bytes_read = 0, bytes_written;
	char *buffer;

	if (!command)
		return 0;

	file_descriptor = popen(command, O_RDONLY);
	if (file_descriptor == -1)
	{
		perror("Error opening file");
		return 0;
	}

	buffer = malloc(sizeof(char) * (buffer_size + 1));
	if (!buffer)
	{
		perror("Error allocating memory");
		close(file_descriptor);
		return 0;
	}

	bytes_read = read(file_descriptor, buffer, buffer_size);
	if (bytes_read == -1)
	{
		perror("Error reading file");
		free(buffer);
		close(file_descriptor);
		return 0;
	}

	buffer[bytes_read] = '\0';

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1)
	{
		perror("Error writing to STDOUT");
		close(file_descriptor);
		free(buffer);
		return 0;
	}

	if (close(file_descriptor) == -1)
	{
		perror("Error closing file");
		free(buffer);
		return 0;
	}

	free(buffer);
	return bytes_written;
}

int main(void)
{
	const char *filename = "example.txt";
	size_t buffer_size = 1024;
	ssize_t chars_printed;

	chars_printed = execute_command(filename, buffer_size);

	if (chars_printed > 0)
		printf("Number of characters printed: %zd\n", chars_printed);

	return 0;
}
