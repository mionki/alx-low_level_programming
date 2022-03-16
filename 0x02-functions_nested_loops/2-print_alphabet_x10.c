#include"main.h"
/**
 *print_alphabet_x10 - prints 10 times the alphabet,in lowerase
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char al = 'a';
		
	while(count++ <=9)
	{
		for(al <= 'z'; al++)
			_putchar(al);
		_putchar('\n');
	}
}	
