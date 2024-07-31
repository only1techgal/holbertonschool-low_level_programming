#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *sum_dlistint - Returns the sum of all the data
 *@head: Pointer to the head of the list
 *
 *Description: Returns the sum of all the data (n)
 *of a header file linked list
 *
 *Return: 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;

while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
