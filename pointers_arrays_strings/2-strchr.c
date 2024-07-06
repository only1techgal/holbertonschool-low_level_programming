#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *_strchr- locates the first occurance of the character c in the string
 *Return NULL if the character is not found
 *@s: the string to be searched
 *@c: the character to be located
 *If c is found - a pointer to the first occurance.
 *if c is not found - NULL
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}

if (c == '\0')
{
return (s);
}

return (NULL);
}

