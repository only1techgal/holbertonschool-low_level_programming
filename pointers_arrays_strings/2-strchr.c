#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *_strchr- locates the first occurance of the character c in the string
 or NULL if the character is not found
 *@s: the string to be searched
 *@c: the character to be located
 *
 *If c is found - a pointer to the first occurance.
 *if c is not found - NULL
 */
unsigned int _strchr(char *s, char *accept);
{
int index;
for (index = 0; s[index] >= '\0'; index++)
{
if (s[index] == c)
return (s + index);
}
return ("\0");
}
