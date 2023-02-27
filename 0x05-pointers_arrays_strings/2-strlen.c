#include "main.h"
/**
 * _strlen - return the length of a string
 * Description: this code returns the length of a string
 * Return: 0 is success
 * @s: to check
 */
int _strlen(char *s);
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
