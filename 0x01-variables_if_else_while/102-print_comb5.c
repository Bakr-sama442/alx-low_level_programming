#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * Description: prints all possible combination of 2 digits numbers
 * Return: Always 0
 */
int main(void)
{
	int c, i;

	for (c = 0; c < 99; c++)
	{
		for (i = c + 1; i <= 99; i++)
		{
			putchar('0' + c / 10);
			putchar('0' + c % 10);

			putchar(' ');

			putchar('0' + i / 10);
			putchar('0' + i % 10);

			if (c == 98 && i == 99)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
