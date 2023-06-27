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

/* 0-bubble_sort.c */
void bubble_sort(int *array, size_t size);
/* 1-insertion_sort.c */
void insertion_sort_list(listint_t **list);
/* 2-selection_sort.c */
void selection_sort(int *array, size_t size);
/* 3-quick_sort.c */
void quick_sort(int *array, size_t size);
void swap_elements(int *array, int idx1, int idx2);
int partition(int *array, int low, int high, size_t size);
void quick_sort_recursive(int *array, int low, int high, size_t size);

/* advanced tasks */


#endif /* __SORT__ */
