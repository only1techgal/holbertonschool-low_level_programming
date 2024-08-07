#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *print_dlistint - Prints all elements of the header file list
 *@h: Points to the head of the header file list
 *
 *Description: Prints all elements of the header file list
 *in node structure.
 *
 *Return: number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t count = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
count++;
}
return (count);
}
