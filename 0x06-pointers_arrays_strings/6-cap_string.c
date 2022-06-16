#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @s: pointer to input string.
 * Return: Returns pointer to capitalized string.
 */
char *cap_string(char *n)
{
	int i, j;
	char sep[] = " \t\n,;.!?\"(){}";

	i = 1;
	if (n[0] >= 'a' && n[0] <= 'z')
		n[0] -= ('a' - 'A');
	while (n[i] != '\0')
	{
		for (j = 0; sep[j] != '\0'; j++)
			if (n[i - 1] == sep[j] && (n[i] >= 'a' && n[i] <= 'z'))
				n[i] -= ('a' - 'A');
		i++;
	}
	return (n);
