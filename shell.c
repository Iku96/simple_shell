#include "shell.h"

/**
 * main - Entry point for the simple shell program
 *
 * Description:
 * This function initializes the shell and enters a loop to continuously
 * prompt the user for commands, read the input, and execute the command.
 *
 * Return: Always 0
 */
int main(void)
{
	char command[128];  /* Buffer to store user input */

	while (1)
	{
		show_prompt();             /* Display shell prompt */
		readCommand(command, sizeof(command));  /* Read user input */
		exeCommand(command);        /* Execute the entered command */
	}

	return (0);
}

