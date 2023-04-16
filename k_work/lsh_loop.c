#include "main.h"

/*LOOP FOR SHOWING THE PROPT*/
void lsh_loop(void)
{
        /*
         * Read: Read the command from standard input.
         * Parse: Separate the command string into a program and arguments.
         * Execute: Run the parsed command.
         *
         */
        /* Declaring Varibales to be used */

        char *read_line;
        char **args;
        int shell_status;

        do
        {
                printf("($)");
		read_line = lsh_read_line();
		args = lsh_split_line(read_line);
		shell_status = lsh_execute(args);

                free(read_line);
                free(args);
        }
        while (shell_status);


}
