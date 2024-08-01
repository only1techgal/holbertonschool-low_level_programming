#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *delete_dnodeint_at_index - Deletes the node at index 'index' of
 *a header file linked list
 *@head: Double pointer to the head of the list
 *@index: The index of the node that should be deleted
 *
 *Description: Deletes the node at index 'index' of
 *a header file linked list in node structure
 *
 *Return: 1 if succeeded and -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current = *head;
unsigned int i = 0;

if (!head || !*head)
return (-1);

if (index == 0)
{
*head = current->next;
if (current->next)
current->next->prev = NULL;
free(current);
return (1);
}

while (current && i < index)
{
current = current->next;
i++;
}
if (!current)
return (-1);

if (current->prev)
current->prev->next = current->next;

if (current->next)
current->next->prev = current->prev;

free(current);
return (1);
}
