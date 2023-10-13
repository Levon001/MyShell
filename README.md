# Simple Shell Project in C

## Introduction

This is a simple shell program implemented in C. It allows you to execute system calls and built-in shell commands. With an intuitive interface, users can easily navigate command history using arrow keys, view the current working directory in the prompt, and enjoy other features. A unique characteristic of this shell is that it can compile and run itself, supporting a variety of tasks from file compilation to output redirection.

## Features

- Command history navigation using arrow keys.
- Display of the current working directory in the prompt.
- Support for file compilation and execution.
- Ability to compile and run itself.
- Handles pipes (`|`).
- Output redirection (`>>` and `>`).
- Create and delete files and directories.

# Supported Commands

- `cd <dir>` : Change the current directory to `<dir>`
- `ls` : List the contents of the current directory
- `exit` : Exit the shell
- `mkdir <dir>` : Create a directory named `<dir>`
- `touch <file>` : Create a file named `<file>`
- `find <pattern>` : Search for files and directories matching `<pattern>`
- `grep <pattern> <file>` : Search for `<pattern>` within `<file>`
- `redirect` : Redirect command output (use `>` or `>>`)
- `cat <file>` : Display the contents of `<file>`
- `less <file>` : View `<file>` with pagination
- `nano <file>` : Edit `<file>` using nano text editor
- `top` : Display system processes in real time
- `clear` : Clear the terminal screen
- `rm <file>` : Remove `<file>`
- `rm -r <dir>` : Recursively remove `<dir>` and its contents
- `rm -rf <dir>` : Forcefully and recursively remove `<dir>` and its contents
- `rmdir <dir>` : Remove an empty directory named `<dir>`
- `ps` : Display currently running processes
- `ps -aux` : Display detailed information about all running processes
- `echo <text>` : Print `<text>` to the terminal
- `help` : Display this help message

# Compilation and Execution Instructions

To compile and run the code, follow these steps:

1. **Compilation**:
   ```bash 
   make
   ```
   
   
## Run the Program:
  ```bash 
   ./myshell
   ```

## Cleanup:
After you are done using the program, you can clean up the compiled files with the following command:
```bash
make clean
```
