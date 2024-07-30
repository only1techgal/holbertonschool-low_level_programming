#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 **add_node_end - Adds a new node at the end of a header file list
 *@str: The pointer to the string
 *@head: The double pointer to the head of the list
 *
 *Description: Added a new node at the end of header file list
 *
 *Return: The address of the new element or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *temp = *head;
char *new_str;
unsigned int len = 0;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

new_str = strdup(str);
if (new_str == NULL)
{
free(new_node);
return (NULL);
}
while (str[len])
len++;
new_node->str = new_str;
new_node->len = len;
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
return (new_node);
}

while (temp->next != NULL)
temp = temp->next;
temp->next = new_node;

return (new_node);
}
