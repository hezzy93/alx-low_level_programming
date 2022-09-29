#include "main.h"

void check(char *s, int strat, int end, int *flag);

/**
 * is_palindrome - function that returns 1 if a string is a palindrome
 * @s: string to be checked
 * Return: 1 if s is a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int flag = 1;

	check(s, 0, _strlen_recursion(s) - 1, &flag);
	return (flag);
}
/**
 * check - checks if a string is a palindrome
 * @s: string to be checked
 * @strat: start index
 * @end: end index
 * @flag: flag to indicate if a string is a palidrome
 * Return: void
 */
void check(char *s, int strat, int end, int *flag)
{
	if (strat <= end)
	{
		if (s[strat] == s[end])
			*flag *= 1;
		else
			*flag *= 0;
		check(s, strat + 1, end - 1, flag);
	}
}
/**
 * _strlen_recursion - calculates the length of a string
 * @s: string to be used
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
int sum = 0;

if (*s != '\0')
{
sum++;
sum += _strlen_recursion(s + 1);
}
return (sum);
}
