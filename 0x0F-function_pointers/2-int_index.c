#include "function_pointers.h"
/**
* int_index - returns the index position if the comparison is true, else -1
* @array: array to search
* @size: size of elements in the array
* @cmp: pointer to a function for comparison
* Return: index position or -1 if not found
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

/* Check if the array, size, or comparison function is invalid */
if (array == NULL || size <= 0 || cmp == NULL)
return (-1);

/* Iterate through the array and compare using the provided function */
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
/* Return -1 if no match is found */
return (-1);
}
