#include "helper_functions.h"

void tokenizeString(char* inputString, char** parsed) {
    char* token = NULL;
    char* delim = " ";  // Use space as the delimiter
    int argc = 0;

    // Create a copy of the input string
    char* inputCopy = strdup(inputString);

    if (inputCopy == NULL) {
        perror("strdup");
        return;
    }

    // Remove the trailing newline character if it exists
    size_t len = strlen(inputCopy);
    if (len > 0 && inputCopy[len - 1] == '\n') {
        inputCopy[len - 1] = '\0';
    }

    // Tokenize the modified input string and count the number of tokens
    token = strtok(inputCopy, delim);
    while (token) {
        parsed[argc] = strdup(token); // Allocate memory for each token
        if (parsed[argc] == NULL) {
            perror("strdup for token");
            break;
        }

        token = strtok(NULL, delim);
        argc++;
    }

    // Set the last element of parsed to NULL
    parsed[argc] = NULL;

    // Free the copy of the input string
    free(inputCopy);
}


char* get_hostname_username() { 	
	char username[256]; // Assuming a maximum username length of 255 characters
    char hostname[256]; // Assuming a maximum hostname length of 255 characters

    // Get the username
    if (getlogin_r(username, sizeof(username)) != 0) {
        perror("getlogin_r");
    }

    // Get the hostname
    if (gethostname(hostname, sizeof(hostname)) != 0) {
        perror("gethostname");
    }

	const char* home_dir = getenv("HOME");
	char cwd[1024]; 
	
    getcwd(cwd, sizeof(cwd)); 

    static char prompt[2056];
    if (strcmp(cwd, home_dir) == 0)
        snprintf(prompt, sizeof(prompt), "%s@%s: ~$ ", username, hostname);
    else
        snprintf(prompt, sizeof(prompt), "%s@%s: %s$ ", username, hostname, cwd);

    return prompt;

}


void changeToHomeDirectory() {
    const char *homeDir = getenv("HOME"); // Get the user's home directory

    if (homeDir == NULL) {
        fprintf(stderr, "HOME environment variable is not set.\n");
		return;    
	}
    if (chdir(homeDir) != 0) {
        perror("chdir");
		return;
    }
}

void displayHelp() {
    printf("\nList of supported commands:\n");
    printf("----------------------------\n");
    printf("cd <dir>           : Change the current directory to <dir>\n");
    printf("ls                 : List the contents of the current directory\n");
    printf("exit               : Exit the shell\n");
    printf("mkdir <dir>        : Create a directory named <dir>\n");
    printf("touch <file>       : Create a file named <file>\n");
    printf("find <pattern>     : Search for files and directories matching <pattern>\n");
    printf("grep <pattern> <file> : Search for <pattern> within <file>\n");
    printf("redirect           : Redirect command output (use > or >>)\n");
    printf("cat <file>         : Display the contents of <file>\n");
    printf("less <file>        : View <file> with pagination\n");
    printf("nano <file>        : Edit <file> using nano text editor\n");
    printf("top                : Display system processes in real time\n");
    printf("clear              : Clear the terminal screen\n");
    printf("rm <file>          : Remove <file>\n");
    printf("rm -r <dir>        : Recursively remove <dir> and its contents\n");
    printf("rm -rf <dir>       : Forcefully and recursively remove <dir> and its contents\n");
    printf("rmdir <dir>        : Remove an empty directory named <dir>\n");
    printf("ps                 : Display currently running processes\n");
    printf("ps -aux            : Display detailed information about all running processes\n");
    printf("echo <text>        : Print <text> to the terminal\n");
    printf("help               : Display this help message\n");
    printf("\n");
}
