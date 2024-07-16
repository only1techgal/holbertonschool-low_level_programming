#include "function_pointers.h"
#include <stdio.h>
#include <ctype.h>

/**
 *print_name - prints a name
 *@f: pointer to the character to be printed
 *@name: name of the character to be printed
 *
 *Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
{
return;
}
f(name);
printf("Hello, my uppercase name is %s\n", name);
}

/**
 *to_uppercase - Converts a name to uppercase
 *@name: The name to be converted to uppercase.
 */
void to_uppercase(char *name)
{
int i = 0;

if (name == NULL)
{
return;
}

while (name[i] != '\0')
{
name[i] = toupper(name[i]);
i++;
}
}
/**
 *main - entry point for program
 *Demonstrates hoe to use the print_name function with to_uppercase function
 *Return: Always 0 (Success)
 */
int main(void)
{
char name[] = "Bob Dylan";

print_name(name, to_uppercase);

return (0);
}
