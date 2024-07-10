#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 **_strdup - returns pointer to newly allocated space containing copy of string
 *@str: the pointer which is returned and duplicated
 *
 *Return: NULL if string is NULL
 */

char *_strdup(char *str)
{
int a = 0, i = 1;
char *s;

if (str == NULL)
return (NULL);
while (str[i])
{
i++;
}
s = malloc((sizeof(char) * i) +1);

if (s == NULL)
return (NULL);
while (a < i)
{
s[a] = str[a];
a++;
}
s[a] = '\0';
return (s);
}
