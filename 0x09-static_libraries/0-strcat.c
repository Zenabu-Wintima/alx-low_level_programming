#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Description: This function appends the content of the source string
 * to the end of the destination string, overwriting the null byte at
 * the end of dest, and then adds a terminating null byte.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
int a, b;

a = 0;

while (dest[a] != '\0')
{
a++;
}

b = 0;

while (src[b] != '\0')
{
dest[a] = src[b];
a++;
b++;
}

dest[a] = '\0';

return (dest);
}
