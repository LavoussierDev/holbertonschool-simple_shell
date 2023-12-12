## Simple Shell
#### Table of contents
- Collaborators
- What is it?
- Download
- Usage
- Requirements
- How it works

#### Collaborators
- 
## What is it?
This repository consists of an executable Shell, the takeaway from this project is to comprehend how the shell works, by creating, & use pre-existing functions to create our commands (system calls), that will work in the terminal, with a linux Operating system. This projects aims to visualize the hidden components behind a shell, It involves understanding the intricacies of process management, file descriptors, signal handling, and parsing user input. Building a shell is not just about creating a functional command-line interface; it's a journey that deepens one's understanding of operating systems, system-level programming, and software design principles. Developers can apply these skills to various domains, such as systems development, security, and infrastructure management.

**Learning Outcome**
   - Process management, input parsing, and error handling, system calls like fork, exec, wait, and signal handling provides valuable insights into how the operating system manages processes. Learning how to create and manage processes is a fundamental aspect of shell development. This includes forking processes, executing commands, and handling child processes.
   
   - Understanding how file descriptors work and implementing input/output redirection and piping are essential components of a shell. This involves manipulating file descriptors to redirect standard input/output/error.
   
   - Implementing a parser for user input involves breaking down command lines into individual components, recognizing command and argument structures, and handling special characters.
   
   - Managing environment variables and resolving the path for executable commands are key functionalities. This involves searching directories in the PATH variable for executable binaries.


## Download 
- `` git clone git@github.com:LavoussierDev/holbertonschool-simple_shell.git ``
- Open directory & run ``./hsh`` 

## Usage
Simple commands
- /bin/ls
- exit
- CONTROL C 
- 

### List of allowed functions and system calls+
all functions from string.h
- `access` (man 2 access)
	- check user's permissions for a file
- `chdir` (man 2 chdir)
	- change working director
- `close` (man 2 close)
	- close a file descriptor
- `closedir` (man 3 closedir)
	- close a directory
- `execve` (man 2 execve)
	-  execute program
- `exit` (man 3 exit)
	- cause normal process termination
- `_exit` (man 2 _exit)
	-  terminate the calling process
- `fflush` (man 3 fflush)
	- flush a stream
- `fork` (man 2 fork)
	- create a child process
- `free` (man 3 free)
	- Display amount of free and used memory in the system
- `getcwd` (man 3 getcwd)
	-  get current working directory
- `getline` (man 3 getline)
	- delimited string input
- `getpid` (man 2 getpid)
	- get process identification
- `isatty` (man 3 isatty)
	- test whether a file descriptor refers to a terminal
- `kill` (man 2 kill)
	- send a signal to a process
- `malloc` (man 3 malloc)
	- allocate and free dynamic memory
- `open` (man 2 open)
	- open and possibly create a file
- `opendir` (man 3 opendir)
	- open a directory
- `perror` (man 3 perror)
	- print a system error message
- `printf` (man 3 printf)
	- format and print data
- `fprintf` (man 3 fprintf)
	- formatted output conversion
- `vfprintf` (man 3 vfprintf)
	- formatted output conversion
- `sprintf` (man 3 sprintf)
	-  formatted output conversion
- `putchar` (man 3 putchar)
	- output of characters and strings
- `read` (man 2 read)
	- read from a file descriptor
- `readdir` (man 3 readdir)
	- read a directory
- `signal` (man 2 signal)
	-  ANSI C signal handling 
- `stat` (__xstat) (man 2 stat)
		- display file or file system status
	- `lstat` (__lxstat) (man 2 lstat)
		- get file status
	- `fstat` (__fxstat) (man 2 fstat)
		-  get file status
	- `strtok` (man 3 strtok)
		-  extract tokens from strings
	- `wait` (man 2 wait)
		- wait for process to change state
	- `waitpid` (man 2 waitpid)
		- wait for process to change state
	- `wait3` (man 2 wait3)
		- wait for process to change state, BSD style
	- `wait4` (man 2 wait4)
		- wait for process to change state, BSD style
	- `write` (man 2 write)**
		- send a message to another user
	

