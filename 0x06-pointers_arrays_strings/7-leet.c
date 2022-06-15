#include "main.h"

/**
 * leet - Entry point
 * ONE if, TWO loops only...
 * @n: input
 * Return: 0 on success
 */
char *leet(char *n)
{
	int i, co;
	int find[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int replacer[] = {'4', '3', '0', '7', '1'};

	for (i = 0; n[i] != '\0'; i++)
	{
		for (co = 0; co <= 9; co++)
		{
			if (n[i] == find[co])
			{
				n[i] = replacer[co / 2];
				co = 9;
			}
		}
	}

	return (n);
}
