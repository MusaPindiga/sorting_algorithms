#include "sort.h"

/**
 * shell_sort - shell sort implemetation
 * @array: array of elements to be sorted
 * @size: size of the array
 */
void shell_sort(int *array, size_t size)
{
	size_t j, i, gap = 1;
	int temp;

	if (array == NULL || size < 2)
		return;

	while (gap <= size / 3)
		gap = gap * 3 + 1;

	while (gap > 0)
	{
		for (i = gap; i < size; i++)
		{
			temp = array[i];

			for (j = i; j >= gap && array[j - gap] > temp; j -= gap)
			{
				array[j] = array[j - gap];
			}
			array[j] = temp;
		}
		print_array(array, size);
		gap = (gap - 1) / 3;
	}
}
