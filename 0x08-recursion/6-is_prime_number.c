#include "main.h"
int prime_checker(int n, int i);
/**
 * is_prime_number - executes prime_checker
 * @n: input to check
 * Return: 0 on success
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (prime_checker(n, n / 2) > 0)
		return (1);
	return (0);
}
