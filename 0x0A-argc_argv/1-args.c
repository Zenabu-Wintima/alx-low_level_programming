#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed to the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 *
 * Description: This program prints the number of arguments passed to it,
 * excluding the program name. It takes two parameters, argc (argument count)
 * and argv (argument vector), and prints argc - 1.
 */
int main(int argc, char *argv[])
{
(void)argv; /* Ignore argv */
printf("%d\n", argc - 1);
return (0);
}
