#include <stdio.h>
#include "main.h"

/**
 *flip_bits - Returns the number of bits needed to be flipped to
 *get from one number to another
 *@n: First number
 *@m: Second number
 *
 *Return: NUmber of bit needed to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int diff = n ^ m;
unsigned int count = 0;

while (diff)
{
count += (diff & 1);

diff >>= 1;
}
return (count);
}
