#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main  - Determine if the last digit of a random number is greater than or less than 5, or is zero.
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char last[] ="Last digit of 98";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%s is %d is %d and is ", last, n, n % 10);
	if (n % 10 > 5)
	{
		printf("greater than 5\n");
	}
	else if (n % 10 == 0)
	{
		printf("0\n");
        }
        else
        {
        	printf("less than 6 and not 0\n");
        }
        return (0);
}
