//A function that searches for a value in an array of integers
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "search_algo.h"

/**
 * linear_search - searches for a value in an array with linear search algo
 * 
 * @param array: pointer to the first element of the array 
 * @param size : number of elements in the array
 * @param value : value to search
 * 
 * Return: return index of the value in the array or -1. 
 */

int linear_search(int *array, size_t size, int value)
{
    for ( size_t i = 0; i <= size; i++)
    {
        if (size !=0 && array[i] == value)
        {
            printf("found %d at index: %lu", array[i], i);
            return i;
        }
        else if (size !=0 && array[i] != value)
        {
            printf("Value checked array[%lu] = %d", i,array[i]);
        }
        else
        {   
             
            return (-1);
            
        }
          
        
    }


}