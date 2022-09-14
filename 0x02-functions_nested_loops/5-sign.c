#include "main.h"
/**
 * print_sing -function to check for a sign of a number
 * @: is the int that will use for the argument of the function
 * Description: The best code writing ever, keep moving.
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
}
	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else
	{
	_putchar('0');
	return (0);
	}
}
