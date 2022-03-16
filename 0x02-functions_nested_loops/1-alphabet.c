#include "main.h"

/**
 *main- contains print_alpahabet that prints the alphabets in lowercase
 *return: Value is 0 when program successful
 */
int main(void)
{	
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
return (0);
}
