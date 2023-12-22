## Simple Shell

![img](https://images.unsplash.com/photo-1483817101829-339b08e8d83f?q=80&w=2604&auto=format&fit=crop&ixlib=rb-4.0.3&ixid=M3wxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8fA%3D%3D)
#### Table of contents
- Download & execute
- What is it?
- Usage
- Built-in commands
- Files & Purpose
- Requirements
- Authors
## Download & execute
- `` git clone git@github.com:LavoussierDev/holbertonschool-simple_shell.git ``
- Compile using gcc:  ``gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh``
- Open directory & run ``./hsh``
## What is it?
This repository consists of an executable Shell, the takeaway from this project is to comprehend how the shell works, by creating, & use pre-existing functions to create our basic commands (system calls), that will work in the terminal, with a linux Operating system. This projects aims to visualize the hidden components behind a shell, It involves understanding the intricacies of process management, file descriptors, signal handling, parsing user input and more.

**Learning Outcome**
   - Process management, input parsing, and error handling, system calls like fork, exec, wait, and signal handling provides valuable insights into how the operating system manages processes. Learning how to create and manage processes is a fundamental aspect of shell development. This includes forking processes, executing commands, and handling child processes.

   - Understanding how file descriptors work and implementing input/output redirection and piping are essential components of a shell. This involves manipulating file descriptors to redirect standard input/output/error.

   - Implementing a parser for user input involves breaking down command lines into individual components, recognizing command and argument structures, and handling special characters.

   - Managing environment variables and resolving the path for executable commands are key functionalities. This involves searching directories in the PATH variable for executable binaries.


## Usage
Use the man page (man) _i.e `man hsh`_
  **Below is a list of commands**
  - ls
  - less
  - cat
  - mv
  - cp



## Built-in commands
- exit
- ps

## Files & Purpose
- AUTHORS: Names of Authors

- _Builtins.c: The code closes the program when asked ("exit") and shows a list of things it knows ("env").

- Builtin.c: The code runs built-in functions like "exit" and "env" based on user input. The second function counts the number of built-in commands.

- Error.c: The code prints errors based on specific cases using switch statements and perror.

- Freeall.c: The code frees dynamically allocated memory for various pointers, including tokens and paths.

- Getenv.c: The code defines a function `_getenv` that retrieves the value of an environment variable by searching through a copy of the system's environment variables. It creates a duplicate to avoid altering the original environment. The function iterates through the copy, compares variable names, and returns the corresponding value if a match is found. The `copy_env` function handles the creation of the duplicate, memory allocation, and copying of environment variables. If successful, it returns a pointer to the environment variable; otherwise, it returns NULL, handling potential errors.

- Getpath.c: The code defines a function `_which` that searches directories in the `PATH` variable for a specified command. It creates a copy of the `PATH`, tokenizes it to extract individual directories, and constructs a potential full path by appending the command name. It checks if the constructed path is executable, and if found, returns a pointer to the full path; otherwise, it continues searching. The function manages memory allocations and handles errors, returning NULL if unsuccessful.

- Getpid.c: The code defines a function `child` responsible for executing a command in a child process. It forks a child process, and in the child, it attempts to execute the specified command using `execve`. If the execution is successful, the child process exits; otherwise, it returns an error code. The parent process waits for the child to finish and then returns 0 on success. The function handles errors and manages the execution process, ensuring proper cleanup and reporting.

- Getprompt.c: The code defines a function `prompt` that checks if the file stream corresponds to a character device (like a terminal) and prints a prompt if true. Another function `_puts` is defined to print a string without a newline character.

- Hsh: The compiled code (i.e. the executable shell)

- Main.c: The code is the main loop of a shell. It continuously prompts for user input, reads the input line, tokenizes it, and executes built-in commands or external programs. It handles cases such as empty input, executes built-in commands, and calls the appropriate functions to execute external commands. The shell supports commands like ls, pwd, echo, cat, and exit. The loop continues until the user exits the shell.

- Man_1_simple_shell: The Man page.

- Readline.c: The code reads user input from a file stream into a buffer using getline, dynamically allocating memory for the input line. If an error or end of file occurs, it frees the buffer and exits the program.

- Shell.h: Header file.

- Strings.c: The code contains string manipulation functions, including comparisons, copying, and length determination.

- Tokenizer.c: The code implements a function that tokenizes a user input string into an array of tokens using whitespace characters as delimiters.


## Requirements
- Linux Operating System
- GCC/CC compiler

# Authors
- Onil Rodriguez - https://github.com/LavoussierDev
- Javier Ferrer - https://github.com/JFFPtech

