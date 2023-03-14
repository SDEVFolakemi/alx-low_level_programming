#include "main.h"

/**
 * prime_num - checking for a prime number
 * @n: number
 * @i: number
 * Return: Always 0
 */

int prime_num(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (prime_num(n, i - 1));
	}
}
