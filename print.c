#include "shell.h"

/**
 * iprint - Writes characters to standard output
 * @characters: The string of characters to be written
 *
 * Description:
 * This function writes the specified string of characters to the standard output.
 *
 * Return: void
 */
void iprint(const char *characters)
{
	write(STDOUT_FILENO, characters, strlen(characters));
}

