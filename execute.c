#include "shell.h"

/**
 * exeCommand - Execute a command
 * @command: The command to execute
 */
void exeCommand(const char *command)
{
	pid_t child_pid = fork(); /* Create a child process */
	if (child_pid == -1)
	{
		perror("fork"); /* Print an error message if fork fails */
		exit(EXIT_FAILURE); /* Exit the program with failure status */
	}
	else if (child_pid == 0) /* Code for the child process */
	{
		/*char *argv[] = {(char *)command, NULL}; * Arguments for the command */
		/*char *envp[] = {NULL}; * Environment variables */
		char *argv[2];
		char *envp[] = {NULL};	
		argv[0] = (char *)command;
		argv[1] = NULL;
		execve(command, argv, envp); /* Execute the command in the child process */
		perror("execve"); /* Print an error message if execve fails */
		exit(EXIT_FAILURE); /* Exit the child process with failure status */
	}
	else /* Code for the parent process */
	{
		wait(NULL); /* Wait for the child process to complete */
	}
}

