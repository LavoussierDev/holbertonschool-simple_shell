#include "shell.h"
{
int main()

	char *str;
	char *token;

	str = _strdup("this pop\t booty\n");


	token = strtok(str, " \t\n");
	while (token)
	{

	printf("%s\n", token);
	token = strtok(NULL, " \t\n");
	}

	printf("str = "%s\n", str);

	return (0);
}
