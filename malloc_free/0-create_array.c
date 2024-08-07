#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 **create_array - creates an array of chars, initializes with specific char
 *@size: The size of the array
 *@c: the character to initialise the array with
 *
 *Return: a pointer to the array or pointer if it fails
 */
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;

str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
return (NULL);

for (i = 0; i < size; i++)
str [i] = c;
return (str);

}
