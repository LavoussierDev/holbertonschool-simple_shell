#include "main.h"

/**
 * get_path - Get the PATH variable as an array of directories.
 * Return: An array of strings representing directories in the PATH.
 */
char **get_path(void)
{
    char *path_str = getenv("PATH");
    char **path_arr = NULL;
    char *token = NULL;
    int num_dirs = 0, i = 0;

    if (!path_str)
        return NULL;

    /* Count the number of directories in PATH */
    token = strtok(path_str, ":");
    while (token)
    {
        num_dirs++;
        token = strtok(NULL, ":");
    }

    /* Allocate memory for the array of strings */
    path_arr = malloc(sizeof(char *) * (num_dirs + 1));
    if (!path_arr)
        return NULL;

    /* Populate the array with directory strings */
    token = strtok(path_str, ":");
    while (token)
    {
        path_arr[i] = _strdup(token);
        if (!path_arr[i])
        {
            /* Memory allocation failure, free previous allocations */
            while (i > 0)
                free(path_arr[--i]);
            free(path_arr);
            return NULL;
        }
        i++;
        token = strtok(NULL, ":");
    }

    /* Add NULL terminator */
    path_arr[i] = NULL;

    return path_arr;
}
