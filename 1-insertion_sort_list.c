#include "sort.h"
/**
 * insertion_sort_list - function that sorts a doubly linked list
 *                       of integers in ascending order using the Insertion
 *                       sort algorithm
 * @list: doubly linked list
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
listint_t *current = (*list)->next;

if (list == NULL || *list == NULL || (*list)->next == NULL)
{
return;
}
	while (current != NULL)
	{
		listint_t *temp = current;
		listint_t *prev = current->prev;

		while (prev != NULL && temp->n < prev->n)
		{
			if (temp->next != NULL)
				temp->next->prev = prev;

			prev->next = temp->next;
			temp->prev = prev->prev;
			temp->next = prev;

			if (prev->prev != NULL)
			{
				prev->prev->next = temp;
			}
			else
			{
				*list = temp;
			}
			prev->prev = temp;
			prev = temp->prev;
			print_list(*list);
		}
		current = current->next;
	}
}
