#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "search_algo.h"

/**
 * linear_search - searches for a value in an array with linear search algo
 * 
 * array: pointer to the first element of the array 
 * size : number of elements in the array
 * value : value to search
 * 
 * Return: return index of the value in the array or -1. 
 */

int linear_search(int *array, size_t size, int value)
{
    size_t i = 0;

	if (!array || size == 0)
		return (-1);

	while (i < size)
	{
		printf("[%d]", array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}

	return (-1);

}