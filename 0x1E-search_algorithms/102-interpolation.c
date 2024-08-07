#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of integers
 * using the Interpolation search algorithm
 *
 * @array: input
 * @size: size of the array
 * @value: value to search
 *
 * Return: index of the number
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;
	double i;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (size)
	{
		i = (double)(high - low) / (array[high] - array[low]) * (value - array[low]);
		pos = (size_t)(low + i);
		printf("Value checked array[%d]", (int)pos);

		if (pos >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[pos]);
		}

		if (array[pos] == value)
			return ((int)pos);

		if (array[pos] < value)
			low = pos + 1;

		if (low == high)
			break;
	}

	return (-1);
}
