#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds integers multiples of 3
 * and 5 less than 1024
 * Return: returns (0) on success
 */
int main(void)
{
unsigned long int m, n, sum;
	int i;

	m = 0;
	n = 0;
	sum = 0;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			m = m + i;
		} else if ((i % 5) == 0)
		{
			n = n + i;
		}
	}
	sum = m + n;
	printf("%lu\n", sum);
return (0);
}
