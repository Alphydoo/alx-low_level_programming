#include <stdio.h>
/**
 * main - printthe first 50 fibobacci nummbers.
 * Return: Nothing.
 */
int main(void)
{
	unsigned long count, i, j. k;

	i = 0;
	j = 1;
	for (count = 0; count < 50; count++)
	{
		k = i + j;
		i = j;
		j = k;
		pr`intf("%lu", k);
		if (count == 49)
			putchar('\n');
		else
		{
			printf(",");
		}
	}
	return (0);
}
