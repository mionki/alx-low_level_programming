#include "main.h"

/**
 *print_alpahabet - prints the alphabets in lowercase
 */
	
void print_alphabet(void)
{
	char al;

	al = 'a';

	while (al <= 'z')
	{
		_putchar(al);
		al++;
	}

	_putchar('\n');
}	


