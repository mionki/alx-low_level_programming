#include "main.h"

/**
 *print_alpahabet - prints the alphabets in lowercase
 */

void print_alphabet(void)
{
	char al;

	al = 'a';

	if (al <= 'z')
	{
		_putchar(al);
		al++;
	}

	_putchar('\n');
}
