#ifndef SEARCH_ALGO
#define SEARCH_ALGO

#include <stdlib.h>
#include <stdio.h>

typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;

}listint_t;

typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
}skiplist_t;    

int linear_search(int *array, size_t, int value);
int binary_search(int *array, size_t, int value);
int jump_search(int *array, size_t, int value);
int interpolation_search(int *array, size_t, int value);
int exponential_search(int *array, size_t, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linar_skip(skiplist_t *list, int value);

#endif