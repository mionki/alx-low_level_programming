#include <stdio.h>
/**
 * main - a program to print 50 finacci numbers
 * Return: returns 0 on success
 */
int main(void)
{
	int count;
	unsigned long m = 0, n = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = m + n;
		printf("%lu", sum);

		m = n;
		n = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
