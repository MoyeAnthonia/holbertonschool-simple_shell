#ifndef HSH_H
#define HSH_H


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>



char *read_input(FILE *stream);
char **parse(char *input);
void execute(char **tokens);

/*TO DO*/
void do_cd(char **tokens);
#endif
