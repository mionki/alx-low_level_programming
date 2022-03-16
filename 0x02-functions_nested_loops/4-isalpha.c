#include"main.h"

/**
 *isalpha - checks if the character s alphabetic
 *Return - return 1  if the character is alphabetic
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
