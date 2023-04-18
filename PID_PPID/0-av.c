#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 *
 * Write a program that prints all the arguments, without using ac.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	while(*argv != NULL)
	{
		printf("%s\n", *argv++);
	}
		return (0);
}
