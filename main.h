#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>


char *get_user_input(FILE *file_stream);
ssize_t execute_command(const char *command, size_t buffer_size);

#endif
