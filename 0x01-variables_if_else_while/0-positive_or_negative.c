#include <stdio.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is %s\n", n);
	}
	else if (n < 0)
	{
		printf("%d is %s\n", n);
	}
	else
	{
		printf("%d is %s\n", n);
	}
	return (0);
}
