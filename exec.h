#ifndef COMMAND_EXECUTION_H
#define COMMAND_EXECUTION_H

#include <sys/types.h>
#include <sys/wait.h>
#include "helper_functions.h"

void execute_command(char *command);

void exec(char** parsed, char* input);

#endif 
