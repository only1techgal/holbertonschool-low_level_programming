#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *free_list - Frees a header file list
 *@head: The pinter to the string
 *
 *Description: Freed the header file list
 *
 *Return: 0 Always (success)
 */
void free_list(list_t *head)
{
list_t *temp;

while (head != NULL)
{
temp = head;
head = head->next;
free(temp->str);
free(temp);
}
}

