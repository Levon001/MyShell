#ifndef HELPER_FUNCTIONS_H
#define HELPER_FUNCTIONS_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <readline/readline.h>
#include <readline/history.h>

void changeToHomeDirectory(void);

char* get_hostname_username(void);

void tokenizeString(char* inputString, char** parsed);

#endif 
