#include <stdio.h>
#include <ctype.h>
#include "function_pointers.h"
#include <string.h>

/**
 *array_iterator - Executes a function given as a parameter on array
 *@action: Pointer to the function as parameter on array
 *@size: the size of ther array
 *@array: Pointer to the array of integers
 *Return: 0 (Success)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array && action)
{
i = 0;
while (i < size)
{
action(array[i]);
i++;
}
}
}
