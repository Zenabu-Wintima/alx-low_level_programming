#include "main.h"

/**
 * _strcpy - copies a string from src to dest
 * @dest: The destination buffer
 * @src: The source string
 *
 * Return: A pointer to the destination string (dest)
 */
char *_strcpy(char *dest, const char *src)
{
int i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';

return (dest);
}
