#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success, the number of bytes written is returned.
 * On error, -1 is returned, and errno is set appropriately.
 */
ssize_t _putchar(char c)
{
return (write(1, &c, 1));
}
