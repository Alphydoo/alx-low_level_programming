#include <stdio.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determine if a random number is positive, negative or zero.
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand(10) - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is %d\n", n, "positive");
	}
	else if (n < 0)
	{
		printf("%d is %d\n", n, "negative");
	}
	else
	{
		printf("%d is %d\n", n, "zero");
	}
	return (0);
}
