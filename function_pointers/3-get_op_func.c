#include "3-calc.h"
#include <stddef.h>

/**
 *get_op_func - Selects the right function to perform the operation by user.
 *@s - The operator passed to the program.
 *
 *Return: Pointer to the function which corresponds to operator given.
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;
while (i < 5)
{
if (*s == *(ops[i].op) && s[1] == '\0')
return (ops[i].f);
i++;
}

return (NULL);
}
