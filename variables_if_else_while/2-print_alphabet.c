#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - This prints the the alphabet in lowercase
 *
 * Return : Always 0 (Success)
 */ 

int main(void)
{
	char alphabets;
	
	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		putchar(alphabets);
	}
	putchar('\n');

	return (0);
}
