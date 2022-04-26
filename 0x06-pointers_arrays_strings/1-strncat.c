#include "main.h"
/**
 * @char *_strncat- a function that concatenates two strings
 * 
 */
char *_strncat(char *dest, char *src, int n)
{
    unsigned int  i;

    for (i =0; i<n; i++)
    {
        dest[i] = src [i];
    }
    return (dest);
}