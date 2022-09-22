#include "main.h"
/**
 * reverse_array - a function that reverses an array of integers
 * @a: array to reverse
 * @n: is the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	i = temp = 0;
	n -= 1;
	while (i <= n)
	{
		temp = a[n];
		a[n--] = a[i];
		a[i++] = temp;
	}
}
