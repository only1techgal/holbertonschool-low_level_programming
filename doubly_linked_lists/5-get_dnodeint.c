#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 **get_dnodeint_at_index - Returns the nth node of a header linked list
 *@head: Pointer to the head of the list
 *@index: Index of the node to return, starting from 0.
 *
 *Description: Returns the nth node of the header linked list
 *in node structure
 *
 *Return: NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;

while (head != NULL)
{
if (i == index)
return (head);
head = head->next;
i++;
}
return (NULL);
}
