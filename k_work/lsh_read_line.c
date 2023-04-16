#include "main.h"

/*
 * Reading a line
 * Reading a line from stdin sounds so simple,
 * but in C it can be a hassle. 
 * The sad thing is that you don’t know ahead
 * of time how much text a user will enter into their shell.
 * You can’t simply allocate a block and hope they don’t exceed it.
 * Instead, you need to start with a block,
 * and if they do exceed it,
 * reallocate with more space.
 * This is a common strategy in C,
 * and we’ll use it to implement lsh_read_line().
 */

#define LSH_RL_BUFSIZE 1024
char *lsh_read_line(void)
{
  int bufsize = LSH_RL_BUFSIZE;
  int position = 0;
  char *buffer = malloc(sizeof(char) * bufsize);
  int c;

  if (!buffer) 
  {
    fprintf(stderr, "lsh: allocation error\n");
    exit(EXIT_FAILURE);
  }

  while (1) 
  {
    /* Read a character */
    c = getchar();

    /* If we hit EOF, replace it with a null character and return. */
    if (c == EOF || c == '\n') 
    {
      buffer[position] = '\0';
      return buffer;
    } 
    else 
    {
      buffer[position] = c;
    }
    position++;

    /* If we have exceeded the buffer, reallocate. */
    if (position >= bufsize) 
    {
      bufsize += LSH_RL_BUFSIZE;
      buffer = realloc(buffer, bufsize);
      
      if (!buffer) 
      {
        fprintf(stderr, "lsh: allocation error\n");
        exit(EXIT_FAILURE);
      }
    }
  }
}

/* IMPLMENTAION WITH getline_function */

/*
char *lsh_read_line(void)
{
  char *line = NULL;
  ssize_t bufsize = 0; // have getline allocate a buffer for us

  if (getline(&line, &bufsize, stdin) == -1){
    if (feof(stdin)) {
      exit(EXIT_SUCCESS);  // We recieved an EOF
    } else  {
      perror("readline");
      exit(EXIT_FAILURE);
    }
  }

  return line;
}
*/
