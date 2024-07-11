#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 **malloc_checked - Allocated memory
 *@b: the number of bytes to be allcocated
 *
 *Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *p;
p = malloc(b);
if (p == NULL)
{
exit(98);
}
return (p);
}
