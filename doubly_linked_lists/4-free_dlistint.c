#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *free_dlistint - Frees a header file list
 *@head: Double pointer to theheader list
 *
 *Description: A function which frees a header file list
 *
 *Return: 0 Always (Success)
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *current;

while (head != NULL)
{
current = head;
head = head->next;
free(current);
}
}
