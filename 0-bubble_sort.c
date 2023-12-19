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
 * Return - Void (nothing)
 **/
void bubble_sort(int *array, size_t size)
{
	unsigned int i, j, n = size;

	if (n < 2)
		return (1);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (array[j] > array[j + 1])
				swap(&array[j + 1], &array[j]);
			_putchar((array[j]) + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
