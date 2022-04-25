#include <stdio.h>

/**
 * main - prints number combination
 * Return: returns 0 on success
 */
int main(void)
{
    int n,m;
    for (n = 48; m <= 57; m++)
    {
        for (m = 48; m <= 57; m++)
        {
            putchar(n);
            putchar(m);
            if (n != 57 || m != 57)
            {
                putchar(',');
                putchar(' ');
            }
        }
    }
    putchar('\n');
    return (0);
}