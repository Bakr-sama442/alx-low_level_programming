#include "main.h"

/**
 * leet - encodes a string to 1337
 * @str: the string to be encoded
 *
 * Return: A pointer to the encoded string
 */
char *leet(char *str)
{
	int index = 0, index2;
	int low_letters[] = {97, 101, 111, 116, 108};
	int upp_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(str + index) != '\0')
	{
		for (index2 = 0; index2 < 5; index2++)
		{
			if (*(str + index) == low_letters[index2] || *(str + index) == upp_letters[index2])
			{
				*(str + index) = numbers[index2];
				break;
		        }
		}

		index++;
	}

	return (str);
}
