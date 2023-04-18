#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - getline
 *
 * Write a program that prints "$ ",
 * wait for the user to enter a command,
 * prints it on the next line.
 *
 * man 3 getline
 * important make sure you read the man,
 * and the RETURN VALUE section,
 * in order to know when to stop reading 
 * Keyword: “end-of-file”, or EOF (or Ctrl+D).
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	/* FILE *stream; */
	char *line, read[25];
	/* size_t len = 0, nread;*/
	(void)argc;
	(void)argv;
	
	/*
	 * if (argc != 2)
	 * {
	 * fprintf(stderr, "Usage: %s <file>\n", argv[0]);
	 * exit(EXIT_FAILURE);
	 * }
	 */

	/*stream = fopen(argv[1], "r");
	if (stream == NULL) 
	{
		perror("fopen");
		exit(EXIT_FAILURE);
	}
	*/

	printf("($)");

	while(1)
	{
		line = fgets(read, 25, stdin);
		printf("%s",line);
		return (0);
	}
		return (0);
}
