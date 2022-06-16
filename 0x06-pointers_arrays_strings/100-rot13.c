#include "main.h"
#include "stdio.h"

/**
 * rot13 - encodes a string using rot13
 * @c: input string.
 * Return: the pointer to dest
 */

char *rot13(char *c)
{
	int count = 0, i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(c + count) != '\0')
	{

		for (i = 0; i < 52; i++)
		{
			if (*(c + count) == alphabet[i])
			{
				*(c + count) = rot13[i];
				break;
			}
		}
		count++;
	}

	return (c);
}
