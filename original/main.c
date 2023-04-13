#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
/**
 * main- Entry point of the program.
 * Return: state of exit.
 */
int main(void)
{
	char command[20];
        char *arg[] = {NULL, NULL};
        const char *envp[] = {NULL};

	while(1)
	{
        	printf(" ($) ");
        	scanf("%s", command);
        	/*printf("\n%s\n", command);*/

       		arg[0] = command;

		if (fork() == 0)
		{
        		execve(arg[0], arg, (char * const *)envp);
			perror("hsh");
			exit(EXIT_FAILURE);
		}
		wait(NULL);
	}
	return (0);
}
