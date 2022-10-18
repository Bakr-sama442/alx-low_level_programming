#include <stdio.h>


/**
 * num_length - returns the length of string
 * @num : operand number
 * Return: number of digits
 */

int num_length(int num)
{
	int length = 0;

	if (!num)
	{
		return (1);
	}

	while (num)
	{
		num = num / 10;
		length += 1;
	}

	return (length);
}
/**
 * main - prints the first 98 fibonacci numbers
 * Return: 0
 */

int main(void)
{
	unsigned long f1 = 1, f2 = 2, tmp, max = 100000000, f10 = 0, f20 = 0, tmp0 = 0;
	short int i = 1, initial0s;

	while (i <= 98)
	{
		if (f10 > 0)
		{
			printf("%lu", F10);
			initial0s = num_length(max) - 1 - num_length(f1);
		}
		while (f10 > 0 && initial0s > 0)
		{
			printf("%i", 0);
			initial0s--;
		}
		printf("%lu", f1);

		tmp = (f1 + f2) % max;
		tmp0 = f10 + f20 + (f1 + f2) / max;
		f1 = f2;
		f10 = f20;
		f2 = tmp;
		f20 = tmp0;

		if (i != 98)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
		i++;
	}
	return (0);
}
