#include "main.h"

/**
 * print_numbers - prints zero to nine
 *
 * return: void
 */

void print_numbers(void)
{
	char a = 0;

	while (a <= 9)
	{
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}
