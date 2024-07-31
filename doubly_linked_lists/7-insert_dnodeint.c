#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 **insert_dnodeint_at_index - Inserts a new node at a give position
 *@n: Data for the new node
 *@h: Pointer to the head of the list
 *@idx: Where the node should be added which also starts at 0
 *
 *Description: Inserts a new node at a give position in a node structure
 *
 *Return: NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *current;
unsigned int i = 0;

if (h == NULL)
return (NULL);

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;

if (idx == 0)
{
new_node->next = *h;
new_node->prev = NULL;
if (*h != NULL)
(*h)->prev = new_node;
*h = new_node;
return (new_node);
}

current = *h;
while (current != NULL && i < idx - 1)
{
current = current->next;
i++;
}
if (current == NULL)
{
free(new_node);
return (NULL);
}
new_node->next = current->next;
new_node->prev = current;
if (current->next != NULL)
current->next->prev = new_node;
current->next = new_node;

return (new_node);
}
