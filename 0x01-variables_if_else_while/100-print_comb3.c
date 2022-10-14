#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * Description: prints two digits combination
 * Return: Always 0
 */
int main(void)
{
	int a, c;

	for (a = '0'; a <= '9'; a++)
	{
		for (c = '0'; c <= '9'; c++)
		{
			if (a < c)
			{
				putchar(a);
				putchar(c);

				if (a != '8' || (a =='8' && c != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
