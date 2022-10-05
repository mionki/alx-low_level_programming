//A function that searches for a value in an array of integers
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "search_algo.h"

/**
 * linear_search - searches for a value in an array with linear search algo
 * 
 * array: pointer to the first element of the array 
 * size : number of elements in the array
 *value : value to search
 * 
 * Return: return index of the value in the array or -1. 
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
