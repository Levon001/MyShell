# Simple Shell Program
![Shell Program](shell_program.png)
This is a simple shell program that allows you to execute system calls and built-in shell commands. It provides features like command history navigation using arrow keys, displays the current working directory in the prompt, and supports file compilation and execution, including the ability to compile and run itself. Additionally, it can handle pipes (`|`), output redirection (`>>` and `>`), create and delete files and directories.
## Features
- Execute system calls and built-in shell commands.
- Command history navigation using arrow keys.
- Display current working directory in the prompt.
- Compile and execute files, including self-execution.
- Handle pipes (`|`) for command chaining.
- Output redirection (`>>` and `>`) for file output.
- Create and delete files and directories.
## Usage
1. Clone the repository to your local machine.
   ```bash
   git clone https://github.com/yourusername/simple-shell.git
   ```
2. Compile the shell program.
   ```bash
   gcc -o simple-shell simple-shell.c
   ```
3. Run the shell.
   ```bash
   ./simple-shell
   ```
4. Use the shell to execute commands and take advantage of the features mentioned above.
## Command Examples
- Execute a system command:
  ```bash
  $ ls -l
  ```
- Use built-in commands:
  ```bash
  $ cd /path/to/directory
  $ mkdir new_folder
  $ touch new_file.txt
  ```
- Navigate command history:
  Use the arrow keys (Up and Down) to navigate through previously executed commands.
- Compile and run a C program:
  ```bash
  $ gcc hello.c -o hello
  $ ./hello
  ```
- Pipe commands:
  ```bash
  $ ls -l | grep "example"
  ```
- Redirect output to a file:
  ```bash
  $ ls -l > file_list.txt
  ```
- Append output to a file:
  ```bash
  $ echo "Additional data" >> file_list.txt
  ```
- Delete a file or directory:
  ```bash
  $ rm file.txt
  $ rmdir empty_directory
  ```
## Contributors
- Your Name (Your Email)
- Other contributors (if any)
