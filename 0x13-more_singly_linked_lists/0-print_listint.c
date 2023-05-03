#include <stdio.h>
#include "lists.h" 
/* 
 * listint_t defined in a header file named lists.h
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;	
/*
 * set a pointer to the head of the list
 *
 */

    while (h) 
    {
	    nodes++;
	    printf("%d\n",  h->n);
	    h = h->next ;
/*
 * move to the next node
 *
 */
	}

	return (nodes);
}	
