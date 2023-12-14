## Simple Shell
#### Table of contents
- Download & execute 
- What is it?
- Usage
- Built-in commands
- Requirements    
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
  - cd
  - cp
  - grep
  


## Built-in commands
- exit
- 



## Requirements
- Linux Operating System
- GCC/CC compiler

# Authors
- Onil Rodriguez - https://github.com/LavoussierDev
- Javier Ferrer - https://github.com/JFFPtech

