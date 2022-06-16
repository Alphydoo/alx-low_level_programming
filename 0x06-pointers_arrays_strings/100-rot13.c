#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13
 * ONE if, TWO loops only...
 * @c: input
 * Return: decrypted string
 */
char *rot13(char *c)
{
	int x, rot_c = 13, i = 0;
	char toswap[] = {'A', 'N', 'a', 'n', 'B', 'O', 'b', 'o', 'C', 'P',
		'c', 'p', 'D', 'Q', 'd', 'q', 'E', 'R', 'e', 'r', 'F', 'S', 'f',
		's', 'G', 'T', 'g', 't', 'H', 'U', 'h', 'u', 'I', 'V', 'i', 'v',
		'J', 'W', 'j', 'w', 'K', 'X', 'k', 'x', 'L', 'Y', 'l', 'y', 'M',
		'Z', 'm', 'z'};

	while (c[i] != '\0')
	{
		for (x = 0; x <= 51; x++)
		{
			if (c[i] == toswap[x])
			{
				c[i] = c[i] + rot_c;
				x = 51;
			}
			rot_c = rot_c * -1;
		}
		i++;
	}
	return (c);
}
