#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/** more headers goes there
 * Description: Get a random number and print the number
 * and if it is positive , negative, or zero
 * Return: 0
 * betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d \n", n);
	/* The  conditional statement starts here */

if (n > 0)
{
	printf("%d is positive\n", n);
}
else if (n < 0)
{
	printf("%d is negative\n", n);
}
else
{
	printf("%d is zero\n", n);
}
return (0);
}
