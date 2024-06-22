#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- Entry point
 * Return: Always 0 (Success) */
 /*
 * betty-style 0-positive_or_negative.c 
 * betty-doc 0-positive_or_negative.c */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
	if (n > 0)
                printf ("%d is positive\n", n);
        else if (n == 0)
                printf ("%d is zero\n", n);
        else
                printf ("%d is negative\n", n);
        return (0);

}
