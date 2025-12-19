# Simple Shell (`hsh`)

## Description

`hsh` is a simple UNIX command line interpreter written in C.  
It reads command lines from standard input, parses them into tokens, and executes
external programs using `fork()` and `execve()`.

The shell supports both interactive mode (prompt) and non-interactive mode
(commands are piped through standard input). It implements basic command
execution, argument handling, PATH searching, and a limited set of built-in commands.

This project was written as part of the Holberton School curriculum. It follows system call
and library usage requirements.

---

## Project Requirements

The shell has the following features:

- Display a prompt when running interactively
- Read and execute commands line by line
- Parse commands and arguments
- Execute external programs using `execve`
- Search executable files using the `PATH` environment variable
- Print appropriate error messages when commands are not found
- Handle end-of-file condition (`Ctrl+D`)
- Support non-interactive execution
- Implement built-in commands:
  - `exit`
  - `env`
- Return correct exit status codes

The shell does **not** support:
- Pipes
- Redirections
- Job control
- Command chaining
- Quoting or escaping
- Wildcards
- Additional built-in commands

---

## Authorised Functions

The following functions and system calls are used in this project:

- `access`
- `execve`
- `fork`
- `wait`
- `waitpid`
- `exit`
- `_exit`
- `getline`
- `malloc`
- `free`
- `perror`
- `printf`
- `fprintf`
- `write`
- `strtok`
- `strcmp`
- `strlen`
- `strncmp`
- `strchr`
- `snprintf`
- `isatty`

No unauthorised functions are used.

---

## Installation

Clone the repository and compile the shell using `gcc`:

```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```
Run the shell:
```./hsh```
---
## Examples
Interactive Mode:
```$ ./hsh
$ ls -l
$ /bin/ls
$ env
$ exit
```
Non-Interactive Mode:
```$ echo "/bin/ls" | ./hsh ```

Command Not Found:
```
$ foobar
./hsh: 1: foobar: not found
```
---
## Testing

- The shell has been tested using:
- Interactive terminal input
- Piped input via standard input
- Valid and invalid commands
- Absolute paths and PATH-based execution
- Built-in commands (exit, env)
- End-of-file condition (Ctrl+D)
Example Test:
```
echo "ls" | ./hsh
```
Valgrind for memory leak checks:
```
valgrind ./hsh
```
---
## Project Structure
.
├── hsh.h          # Header file with function prototypes
├── hsh.c          # Main shell loop and input handling
├── execute.c      # Command execution and PATH searching
└── README.md      # Project documentation

## Authors
- Andrew Kasapidis (@TheKasman)
- Uliana Deshin (@ooleeyanah) 
- Anthonia Ifoeze (@MoyeAnthonia)
