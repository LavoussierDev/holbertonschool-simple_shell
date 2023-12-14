#ifndef shell_h
#define shell_h

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#include <errno.h>
#include <fcntl.h>

#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

char *read_line(void);


#endif
