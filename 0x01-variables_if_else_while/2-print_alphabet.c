#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * Description: print the alphabet in lowercase\n
 * Return: Always 0
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
