 #include "shell.h"

char *_getpath(char *command)
{
    char *path_env, *full_cmd, *dir;
    int i;
    struct stat st;

    if (command == NULL)
        return NULL;

    for (i = 0; command[i]; i++)
    {
        if (command[i] == '/')
        {
            if (stat(command, &st) == 0)
                return strdup(command);

            return NULL;
        }
    }

    path_env = _getenv("PATH");
    if (!path_env)
        return NULL;

    dir = strtok(path_env, ":");
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
