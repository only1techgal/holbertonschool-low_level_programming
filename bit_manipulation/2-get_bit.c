#include <stdio.h>
#include "main.h"

/**
 *get_bit - Returns the value of a bit at a given index
 *@n: The integer
 *@index: The index of the bit to get, starting from 0
 *Return: VAluse at index or -1 if there is an error
 */
int get_bit(unsigned long int n, unsigned int index)
{

if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}

return (n >> index & 1);

}
