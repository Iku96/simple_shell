Simple Shell Project
Description
This is a simple shell project implemented in C, inspired by the Unix shell. The shell provides a command-line interfacefor users to interact with the operating system.

Features
Command Execution: Execute commands entered by the user.
Built-in Commands: Implement basic built-in commands like cd, exit, etc.
Command Line Arguments: Handle command line arguments and options.
Process Creation: Use system calls like fork and execve for process creation and execution.
Environment Variables: Manipulate environment variables within the shell.

How to Compile:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
