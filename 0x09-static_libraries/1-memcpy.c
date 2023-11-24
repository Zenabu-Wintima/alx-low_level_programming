#include "main.h"

/**
 * _memcpy - Copies n bytes from memory area src to memory area dest
 * @dest: Destination memory area
 * @src: Source memory area
 * @n: Number of bytes to copy
 * Return: A pointer to the destination memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int index;

for (index = 0; index < n; index++)
{
dest[index] = src[index];
}

return (dest);
}
