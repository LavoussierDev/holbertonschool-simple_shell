#ifndef shell_h
#define shell_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

#define BUFFER 1024
#define TRUE 1
#define PROMPT "$ "
#define ERR_MALLOC "Unable to malloc\n"
#define ERR_FORK "Unable to fork\n"
#define ERR_PATH "No such file or directory\n"
extern char **environ;

/**
 * struct list_s - a struct, part of path list.
 * @value: unused value.
 * @next: pointer for the next value
 */
typedef struct list_s
{
char *value;
struct list_s *next;
} list_s;

/**
 * struct built_s - a struct, part of executing built in functions.
 * @name: verifies the name of the builtin & confirms if not null.
 * @p: verifies that the number of chars on of the built in is correct
 */
typedef struct built_s
{
char *name;
int (*p)(void);
} built_s;

void prompt(int fd, struct stat buf);
char *_getline(FILE *fp);
char **tokenizer(char *str);
char *_which(char *command, char *fullpath, char *path);
int child(char *fullpath, char **tokens);
void errors(int error);

void _puts(char *str);
int _strlen(char *s);
int _strcmp(char *name, char *variable, unsigned int length);
int _strncmp(char *name, char *variable, unsigned int length);
char *_strcpy(char *dest, char *src);

int shell_env(void);
int shell_exit(void);
int builtin_execute(char **tokens);
int shell_num_builtins(built_s builtin[]);

char *_getenv(const char *name);
char **copy_env(char **environ_copy, unsigned int environ_length);
list_s *pathlist(char *variable, list_s *head);

void free_all(char **tokens, char *path, char *line, char *fullpath, int flag);
void free_dp(char **array, unsigned int length);

#endif
