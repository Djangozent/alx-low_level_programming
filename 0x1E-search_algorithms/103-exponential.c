#include "search_algos.h"

/**
 * _binary_search - searches for a value in a sorted array of integers
 * using binary search
 * @array: pointer to the first element of the array to search
 * @left: the starting index of the [sub]array to search
 * @right: the ending index of the [sub]array to search
 * @value: the value to search for
 *
 * Return: if the value is not present or the array is NULL, -1
 * otherwise, the index where the value is located
 *
 * Description: prints the [sub]array being searched for after change
 */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - i;
		else
			left = i + 1;
	}

	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: pointer to the first element of the array to search
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: -1 if the value is missing or NULL, otherwise the value location
 * index
 *
 * Description: prints a value everytime it is compared in the array
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (_binary_search(array, i / 2, right, value));
}
