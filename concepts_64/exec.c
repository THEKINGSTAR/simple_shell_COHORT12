/*
 * The system call execve allows a process to execute another program (man 2 execve). 
 * Note that this system call does load the new program into the current process’ memory 
 * in place of the “previous” program: on success execve does not return to continue 
 * the rest of the “previous” program.
 *
 * Warning: in this example, 
 * execve is used without the current environment (last argument),
 * don’t forget to add it in your Shell!
 *
 */
#include <stdio.h>
#include <unistd.h>

/**
 * main - execve example
 *
 * Return: Always 0.
 */
int main(void)
{
    char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};

    printf("Before execve\n");
    if (execve(argv[0], argv, NULL) == -1)
    {
        perror("Error:");
    }
    printf("After execve\n");
    return (0);
}
