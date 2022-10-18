#include "main.h"
int main(void)
{
	int str[] = {1, 2, 3, 4, 5, 6}
	int count, size;

	size = sizeof(str) / sizeof(int);
	for (count = 0; count < size; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}
