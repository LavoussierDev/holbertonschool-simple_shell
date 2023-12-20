#include "shell.h"
#include <stdlib.h>
#include <string.h>

char *_strdup(const char *str)
{
    size_t len;
    char *ptr;

    if (str == NULL)
        return NULL;

    len = strlen(str);
    ptr = malloc(len + 1);

    if (ptr == NULL)
        return NULL;

    strcpy(ptr, str);

    return ptr;
}

int _strcmp(char *s1, char *s2)
{
	int cmp;

	cmp = (int)*s1 - (int)*s2;
	while (*s1)
	{
		if (*s1 != *s2)
		break;

		s1++;
		s2++;
		cmp = (int)*s1 - (int)*s2;
	}
	return (cmp);
}

char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p)
		p++;

	while (*src)
	{
		*p = *src;
		p++;
		src++;
	}
	*p = *src;
	return (dest);
}

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return dest;
}


