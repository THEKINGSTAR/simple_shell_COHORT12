#ifndef HEADER_FILE
#define HEADER_FIEL

#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>


char *lsh_read_line(void);
void lsh_loop(void);
char **lsh_split_line(char *line);
int lsh_launch(char **args);
int lsh_execute(char **args);




/*
  Function Declarations for builtin shell commands:
 */
int lsh_cd(char **args);
int lsh_help(char **args);
int lsh_exit(char **args);
/**/
/*
  List of builtin commands, followed by their corresponding functions.
 */

/* */
char *builtin_str[];
int (*builtin_func[]) (char **);
int lsh_num_builtins();
int lsh_cd(char **args);
int lsh_help(char **args);
int lsh_exit(char **args);

#endif
