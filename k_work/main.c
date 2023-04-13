#include "main.h"
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
		else
		{
			 _print_arg(arg);

		}
		wait(NULL);
	}
	return (0);
}

/**
 * _print_arg - handles conversion specifiers for _printf
 * @arg: conversion specifier
 * @args: va_list of arguments for conversion
 * Return: number of characters printed
 */
void _print_arg(char *arg[])
{
	int counter = 1;

	while (++counter <= 1) 
		{
			printf("\nListing %s...\n", arg[counter-1]);
			listdir(arg[counter-1]);
			/* listdir(arg); */
		}

}
