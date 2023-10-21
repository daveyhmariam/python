#include <stdio.h>
#include "lists.h"

/**
 * check_cycle - checkes if there is a cycle in a linked list
 * @list: list to be checked
 * Return: 0 if there is no cycle 1 otherwise
*/

int check_cycle(listint_t *list)
{
    listint_t *front, *back;
    back = list;
    front = list;
    while ((front->next->next != NULL) && (front->next != NULL) && (front != NULL))
            {
				back = back->next;
				front = front->next->next;
				if (back == front)
					return (1);
            }

	return (0);
}
