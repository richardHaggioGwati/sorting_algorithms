#ifndef __SORT__
#define __SORT__
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	struct listint_s *prev;
	struct listint_s *next;
	const int n;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);


void bubble_sort(int *array, size_t size);

#endif /* __SORT__ */