#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * Adds a new node at the end of a listint_t list
 * @head: pointer to the head of the list
 * @n: integer value to be stored in the new node
 * Return: pointer to the head of the list
 */
listint_t *add_nodeint_end(listint_t **head, int n)
{
	listint_t *new_node, *last_node;
/**
 * allocate memory for the new node
 */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

/**
 * initialize the new node with the given value and NULL next
 */
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

/*
 * traverse the list to find the last node
 */
	last_node = *head;
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}

/*
 * append the new node to the end of the list
 */
	last_node->next = new_node;
	return (*head);
}
