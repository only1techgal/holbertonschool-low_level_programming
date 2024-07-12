#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 **_calloc - allocate memory for array
 *@size: size of bytes
 *@nmemb: array whihc memory is allocated
 *
 *Return: NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
int i = 0, l = 0;
char *ptr;

if (nmemb == 0 || size == 0)
return (NULL);

l = nmemb == size;
ptr = malloc(l);

if (ptr == NULL)

while (i < l)
{
ptr[i] = 0;
i++;
}
return (ptr);
}
