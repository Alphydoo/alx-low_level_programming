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
        char last[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
	{
		printf("Last digit of %d and is greater than 5\n");
	}
	else if (n % 10 == 0)
	{
		printf("Last digit of %d is %d and is 0\n");
        }
        else
        {
        	printf("Last digit of %d is %d and is less than 6 and not 0\n");
        }
        return (0);
}
