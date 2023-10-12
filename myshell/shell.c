#include "exec.h"
#include "helper_functions.h"

#define MAXLIST 100 // max number of commands to be supported 


int main() {
    char *input;
    char* parsedArgs[MAXLIST] = {NULL};

    changeToHomeDirectory();
    // Set up history
    using_history();
    read_history(".shell_history");  

    while (1) {
        char* prompt = get_hostname_username();
        input = readline(prompt);

        tokenizeString(input, parsedArgs);    

        if (input == NULL) {
            // Handle Ctrl+D (EOF)
            printf("\n");
            break;
        }

        exec(parsedArgs, input);
        
        for(int i = 0; parsedArgs[i] != NULL; ++i) {
            free(parsedArgs[i]);
        }

        free(input);
    }
    
    return 0;
}



