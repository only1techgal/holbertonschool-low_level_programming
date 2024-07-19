#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 *main - Entry point of the program
 *@arguc: Number of arguments turned into integers.
 *@argv: Array of argument strings.
 *
 *Return: 0 on success, or 98, 99, 100, or 101 on certain errors
 */
int main(int argc, char *argv[])
{
int (*oprt)(int, int);

if (argv != 4)
{
printf("Error\n");
exit(98);
}
oprt = get_op_func(argv[2]);

if (!oprt)
{
printf("Error\n");
exit(99);
}

printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));
return (0);
}
