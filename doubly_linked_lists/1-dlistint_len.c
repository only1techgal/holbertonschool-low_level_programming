#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *dlistint_len - Returns the number of elements in a linked header file list
 *@h: pointer to the head of the header file
 *
 *Description: Returns the number of elements in alinked header file list
 *in node structure
 *
 *Return: 0 Always (success)
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;

while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
