#include "main.h"

/**
 * print_diagonal - diagonal lines made of backslashes
 * @n: number \ to be printed
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 0, j;

	while (i < n && n > 0)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}

		_putchar(92);
		i++;
	}
	if (i < (n - 1))
	{
		_putchar('\n');
	}
	_putchar('\n');
}
