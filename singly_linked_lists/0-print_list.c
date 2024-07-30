#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *print_list - Prints all elements of a header file list
 *@h: The pinter to the head
 *
 *Description: Printed list node structure
 *
 *Return: 0 (nil)if string is NULL
 */
size_t print_list(const list_t *h)
{
size_t node_count = 0;

while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%u] %s\n", h->len, h->str);
}
h = h->next;
node_count++;
}
return (node_count);
}
