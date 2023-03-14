#include "main.h"

/**
 * square_root - calculates square root
 * @a: integer
 * @b: integer
 * Return: input integer
 */

int square_root(int a, int b)
{
	if (b * b > a)
	{
		return (-1);
	}

	if (b * b == a)
	{
		return (b);
	}
	return (square_root(a, b + 1));
}
