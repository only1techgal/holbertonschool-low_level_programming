#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *list_len - Returns the number of elements linked in header file list
 *@h: Pointer to the string
 *
 *Description: Returned number of elements linked in header file list
 *Return: 0 Always (Success)
 */
size_t list_len(const list_t *h)
{
size_t node_count = 0;

while (h != NULL)
{
node_count++;
h = h->next;
}
return (node_count);
}
