#include "search_algos.h"

/**
 *linear_search - searches for a value in an array linearly
 *it doesnt require sorting to reduce complexity
 *@array: Array input
 *@size: Array size
 *@value: value to search for
 *Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	int index = 0;
	size_t i;

	for (i = 0; i < size; i++)
        {
		printf("Value checked array[%d] = [%d]\n", index, array[i]);
		if (value == array[i])
			return (index);
	
	return (-1);
	}
}

