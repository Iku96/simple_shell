#include "shell.h"

/**
 * readCommand - Reads a command from standard input
 * @command: Buffer to store the read command
 * @size: Size of the buffer
 *
 * Description:
 * This function reads a command from standard input, removes the newline character,
 * and handles end-of-file conditions.
 *
 * Return: void
 */
void readCommand(char *command, size_t size)
{
	if (fgets(command, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			iprint("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			iprint("ERROR: encountered an error while reading input.");
		}
	}
	command[strcspn(command, "\n")] = '\0';
}

