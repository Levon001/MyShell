#include "exec.h"

void execute_command(char *command) {
    pid_t pid;
    int status;

    pid = fork();

    if (pid == 0) {
        // Child process
        char *args[] = {
            "/bin/zsh",
            "-c",
            command,
            NULL
        };
        execvp(args[0], args);
        perror("execvp");
        exit(1);
    } else if (pid < 0) {
        perror("fork");
    } else {
        // Parent process
        waitpid(pid, &status, 0);
    }
}


void exec(char** parsed, char* input) {
        if(strcmp(parsed[0],"exit") == 0 && parsed[1] == NULL) {
            exit(0);
        } else if (strcmp(parsed[0], "cd") == 0) {
            if (parsed[1] == NULL || strcmp(parsed[1],"~") == 0) {
                changeToHomeDirectory(); // Move to the home directory
            } else {
                if (chdir(parsed[1]) != 0) {
                    perror("chdir");
                }
            } 
        } else if (strlen(input) > 0) {
            add_history(input);
            write_history(".shell_history");  // Save command history
            execute_command(input);
        }  
}
