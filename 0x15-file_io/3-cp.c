#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFSIZE 1024

/**
 * error_exit - Prints an error message and exits with the given code.
 * @exit_code: The exit code.
 * @message: The error message to be printed.
 */
void error_exit(int exit_code, const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(exit_code);
}

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of arguments.
 * @argv: The array of arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, read_bytes, write_bytes;
	char buffer[BUFSIZE];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to");

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		error_exit(98, "Error: Can't read from file NAME_OF_THE_FILE");

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		error_exit(99, "Error: Can't write to NAME_OF_THE_FILE");

	do {
		read_bytes = read(file_from, buffer, BUFSIZE);
		if (read_bytes == -1)
			error_exit(98, "Error: Can't read from file NAME_OF_THE_FILE");

		write_bytes = write(file_to, buffer, read_bytes);
		if (write_bytes == -1)
			error_exit(99, "Error: Can't write to NAME_OF_THE_FILE");
	} while (read_bytes == BUFSIZE);

	if (close(file_from) == -1)
		error_exit(100, "Error: Can't close fd file_from");

	if (close(file_to) == -1)
		error_exit(100, "Error: Can't close fd file_to");

	return (0);
}
