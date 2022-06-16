#include "main.h"

/**
 * rot13 - encodes a string by rotating the characters 13 spaces.
 * @s: pointer to input string.
 * Return: Returns pointer encoded string.
 */
char *rot13(char *c)
{
	int i, j;
	char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char boolean;

	for (i = 0; c[i] != '\0'; i++)
	{
		boolean = 0;
		for (j = 0; alpha[j] != '\0' && boolean == 0; j++)
		{
			if (c[i] == alpha[j])
			{
				c[i] = r[j];
				boolean = 1;
			}
		}
	}
	return (c);
}
