#include <stdio.h>
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
	char *read;


	printf("($)");

	while(read != EOF)
	{
		read = getline();
	}
		return (0);
}
