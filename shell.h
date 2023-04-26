#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

#define BUFFER_SIZE 1024
#define MAX_INPUT 1024
#define MAXARGS 10
#define DELIM " \t\r\n\a"

void put_string(char *str);
char **re_alloc(char **ptr, unsigned int size);
char *str_tok(char *str, char *delim);

void shell_loop(void);
char *read_line(void);
char **split_line(char *line);
int execute(char **args);

#endif
