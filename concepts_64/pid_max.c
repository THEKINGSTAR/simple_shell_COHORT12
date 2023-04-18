#include <stdio.h>
#include <unistd.h>

/**
 * main - pid_max
 *
 * gcc -Wall -Werror -pedantic pid_max.c -o mypid && ./mypid
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t my_pid, p_pid;

	my_pid = getpid();
	printf("Program pid %u\n", my_pid);

	p_pid = getppid();
	printf("Program Parent Pid %u\n", p_pid);

	return (0);
}
