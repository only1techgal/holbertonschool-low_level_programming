#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 **create_array - creates an array of chars,initializes with a specific char
 *@size: the sie of array
 *@c: the character to initialize the array with
 *
 *Return a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
if (size == 0)
}
{
return (NULL);
}
char *array = malloc(size * sizeof(char));
{
if(array == NULL)
}
{
return NULL;
}
for (unsigned int i = 0; i < size; i++)
{
array[i] = c;
}
{
return array;
}
