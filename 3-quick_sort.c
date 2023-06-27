#include "sort.h"

/**
 * quick_sort - function that sorts an array of integers
 *              in ascending order using the Quick sort algorithm
 * @array: array
 * @size: array's size
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_recursive(array, 0, size - 1, size);
}

/**
 * partition - partition
 * @array: array
 * @low: lower index
 * @high: higher index
 * @size: array's size
 * Return: index of the pivot
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1, j;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				swap_elements(array, i, j);
				print_array(array, size);
			}
		}
	}

	if (array[i + 1] != array[high])
	{
		swap_elements(array, i + 1, high);
		print_array(array, size);
	}

	return (i + 1);
}

/**
 * quick_sort_recursive - recursive function for quick sort
 * @array: given array
 * @low: lower index
 * @high: higher index
 * @size: array's size
 * Return: void
 */
void quick_sort_recursive(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int pivot = partition(array, low, high, size);

		quick_sort_recursive(array, low, pivot - 1, size);
		quick_sort_recursive(array, pivot + 1, high, size);
	}
}

/**
 * swap_elements - swap two elements in an array
 * @array: array
 * @idx1: index of first element
 * @idx2: index of second element
 * Return: void
 */
void swap_elements(int *array, int idx1, int idx2)
{
	int temp = array[idx1];

	array[idx1] = array[idx2];
	array[idx2] = temp;
}
