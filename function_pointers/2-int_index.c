#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "function_pointers.h"

/**
 *int_index - Searches for an integer
 *@cmp: Pointer to the integer
 *@array: Pointer to the array of integer
 *@size: The size of the array
 *
 *Return: 0 (Success)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
if (size > 0)
{
if (array != NULL && cmp != NULL)
{
while (i < size)
{
if (cmp(array[i]))
return (i);
i++;
}
}
}
return (-1);
}
