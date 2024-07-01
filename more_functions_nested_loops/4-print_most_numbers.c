#include "main.h"
<<<<<<< HEAD
#include <stdio.h>
/**
 * print_most_numbers - prints the numbers  from 0 to 9
 * Description: prints numbers from 0 to 9
 * Return : Always 0 to 9
 */
void print_most_numbers(void)
{
	int x = 0;

	for (; x <= 9; x++)
	{
		if (x == 2 || x == 4)
		{
			continue;
		}
		else
		{
			putchar(x + '0');
		}
	}

	putchar('\n');
}
=======
#include 
>>>>>>> 4a5f7036d4eb7c73beb2483664276a82954b486f
