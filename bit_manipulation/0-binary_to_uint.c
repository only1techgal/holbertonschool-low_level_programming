#include <stdio.h>
#include "main.h"

/**
 *binary_to_uint - Converts a binary number to an unsigned integer
 *@b: A pointer to a string, of 0 0r 1 chars
 *
 *Return: Converted number or 0 if there are more chars  in string
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0;
int i = 0;

if (b == NULL)
return (0);

while (b[i] != '\0')
{
if (b[i] != '0' && b[i] != '1')
return (0);

num = num * 2 + (b[i] - '0');
i++;
}
return (num);
}
