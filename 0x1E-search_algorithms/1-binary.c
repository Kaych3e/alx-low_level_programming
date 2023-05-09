#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * 		using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: Always EXIT_SUCCESS
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, middle, high = size -1;

	if (array == NULL)
		return (-1);

	while (low != high)
	{
		middle = (low + high) / 2;
		if (array[middle] == value)
			return (middle);
		else if (array[middle] > value)
			high = middle - 1;
		else
			low = middle + 1;
	}
	return (-1);
}
