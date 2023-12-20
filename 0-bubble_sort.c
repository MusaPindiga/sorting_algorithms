#include "sort.h"
#include <stdio.h>

/**
 * swap - function that swaps two integers
 *
 * @x: the first integer
 * @y: the second integer
 *
 * Return - Void (nothing)
 **/
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

/**
 * bubble_sort - function that implement bubble sort algorithm
 *
 * @array: array of elements to be sorted
 * @size: size of the array
 *
 * Description - Print the array afteer each swap
 **/
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(array + i, array + i + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}
