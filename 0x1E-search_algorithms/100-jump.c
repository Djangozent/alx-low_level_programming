#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an array of integers using
 * the jump search algorithm
 * @array: input
 * @size: size of the array
 * @value: value to seach from
 *
 * Return: index of the number
 */
int jump_search(int *array, size_t size, int value)
{
	int index, m, n, prev;

	if (array == NULL || size == 0)
		return (-1);

	m = (int)sqrt((double)size);
	n = 0;
	prev = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);

		n++;
		prev = index;
		index = n * m;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, index);

	for (; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);

}
