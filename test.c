#include "shell.h"

int main()
{
	char *str;
	char *token;

	str = _strdup("bubble    pop/t   booty\n");


	token = strtok(str, " \t\n");
	printf("%s\n", token);

	return (0);
}
