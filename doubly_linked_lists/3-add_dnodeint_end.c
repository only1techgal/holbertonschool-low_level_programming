#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 **add_dnodeint_end - Adds a new node at the end of header list
 *@n: Integer value for the new node
 *@head: Double pinter to thte head of the list
 *
 *Description: Adds a new node at the end of header list
 *
 *Return: Address of the new element or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node;
dlistint_t *current;

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
return (NULL);
}

new_node->n = n;
new_node->next = NULL;

if (*head == NULL)
{
new_node->prev = NULL;
*head = new_node;
return (new_node);
}
current = *head;
while (current->next != NULL)
{
current = current->next;
}

current->next = new_node;
new_node->prev = current;

return (new_node);
}
