#include"main.h"

/**
 *_islower - checks if character is lowercase
 *Return: returns 1 if character is lowercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
