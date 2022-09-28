#include "main.h"

/**
 * factorial- function that returns the factorial of a given number
 * @n: the number to be printed
 * Return: an integer
 */

nt factorial(int n)
{
	if (n < 0)
		return;
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1);
}
