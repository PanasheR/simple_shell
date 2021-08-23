0x16. C - Simple Shell(ALX_SE Group project)


Compilation

Shell will be compiled this way:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh


Testing

Your shell should work like this in interactive mode:

$ ./hsh

($) /bin/ls

hsh main.c shell.c

($)

($) exit

$


But also in non-interactive mode:

$ echo "/bin/ls" | ./hsh

hsh main.c shell.c test_ls_2

$

$ cat test_ls_2

/bin/ls

/bin/ls

$

$ cat test_ls_2 | ./hsh

hsh main.c shell.c test_ls_2

hsh main.c shell.c test_ls_2

$


Files and descriptions:

Main.c --- is the entry point/file

Holberton.h -- header file

Interactive.c -- It runs when it receives input through the non-interactive modes
echo and cat, in addition to real-time execution. 

Non_interactive.c -- Error message when you receive parameters using the argc
and argv arguments. 

Create_process.c -- This function validates the existence of a file locally, and
$PATH, if the file exists, creates a child process that validates all its error states.
Using the stat() , fork() , execve() and waitpid() functions .

Validate.c -- This function validates if a file is found in the paths of the system
PATH by means of the stat system call. 

_get_env.c –This function returns a specified environment variable. 

_exit.c – Implement the exit built-in, that exits the shell. This function returns a value specific of exit. 

Print_env.c -- This function emulates the operation of the env function, printing
the environment variables. 

str_function.c -- Contains auxiliary functions for handling character strings: strlen() ,
_strcat() , _strcpy() and _strdup().

strcmp_function.c -- Auxiliary functions for character string comparison:
_strcmp() and _strncmp().

_calloc.c -- This function emulates the operation of the calloc() function. Allocate
and zero-initialize array.

_signal.c – it is important for the main.c code to put a new line and “cisfun$”
phrase

