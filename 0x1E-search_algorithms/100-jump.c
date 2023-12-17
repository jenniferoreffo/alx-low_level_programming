#include "search_algos.h"

/**
*jump_search - jumping linear search algorithm
*@array: Array of elements
*@size: Array size
*@value: value to search for
*Return: int index of the number
*/
int jump_search(int *array, size_t size, int value)
{	

	size_t current, prev, i, step;
	if (!array)
		return (-1);
	step = sqrt(size);
	current = prev = 0;
	while (array[current] < value && current < size)
	{
		prev = current;
		current += step;
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev, current);

	for (i = prev; i <= current && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
