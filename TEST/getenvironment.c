#include "main.h"

/**
 * get_environment - Get the entire environment variables as an array of strings.
 * Return: An array of strings representing environment variables.
 */
char **get_environment(void)
{
    extern char **environ; /* External variable containing environment variables */
    char **env_arr = NULL;
    int num_vars = 0, i = 0;

    /* Count the number of environment variables */
    while (environ[num_vars])
        num_vars++;

    /* Allocate memory for the array of strings */
    env_arr = malloc(sizeof(char *) * (num_vars + 1));
    if (!env_arr)
        return NULL;

    /* Populate the array with environment variable strings */
    for (i = 0; i < num_vars; i++)
    {
        env_arr[i] = _strdup(environ[i]);
        if (!env_arr[i])
        {
            /* Memory allocation failure, free previous allocations */
            while (i > 0)
                free(env_arr[--i]);
            free(env_arr);
            return NULL;
        }
    }

    /* Add NULL terminator */
    env_arr[i] = NULL;

    return env_arr;
}
