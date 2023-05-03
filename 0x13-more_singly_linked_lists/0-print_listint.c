#include <stdio.h>
#include "lists.h" 
/* 
 * listint_t defined in a header file named lists.h
 *
 */

size_t print_listint(const listint_t *head)
{
    const listint_t *current = head; 
/*
 * set a pointer to the head of the list
 *
 */

    while (current != NULL) { 
/*
 * iterate until the end of the list is reached
 *
 */
	printf("%d\n", current->n); 
/*
 * print the current node's integer value
 *
 */
	current = current->next; 
/*
 * move to the next node
 *
 */
    }
}
