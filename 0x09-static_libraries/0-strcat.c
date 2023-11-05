#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * This function appends the string 'src' to the string 'dest'.
 *
 * Return: Pointer to the concatenated string (dest)
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';  /* Ensure the concatenated string is null-terminated */
	return (dest);
}
