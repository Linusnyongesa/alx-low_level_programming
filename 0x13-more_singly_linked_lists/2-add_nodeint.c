#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * adds nodes to the beginning of the list
 *
 * print the values in the list
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head = NULL;

	add_nodeint(&head, 1);
	add_nodeint(&head, 2);
	add_nodeint(&head, 3);
	for (listint_t *node = head;
	node != NULL; node = node->next)
	{
		printf("%d\n", node->n);
	}
	return (0);
}
