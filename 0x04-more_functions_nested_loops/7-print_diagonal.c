#include "main.h"

/**
 * print_diagonal - diagonal lines made of backslashes
 * @n: number \ to be printed
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 0, j = 0;

	while (i < n && n > 0)
	{
		while (j < i)
		{
			_putchar(' ');
			j++;
		}

		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (i == 0)
	{
		_putchar('\n');
	}
}
