#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -Entry point
 *
 * Description: Get the last digit of a random number and print the number
 *
 * and if it is greater than 5,equal to 0 andless than 0
 *
 * Return: 0
 */

int main(void)
{
	int n, y;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	y = n % 10;

if (y > 5)

	printf("Last digit of %d is %d and is greater than 5\n", n, y);

else if (y < 6)

	printf("Last digit of %d is %d and is 0\n", n, y);

else
	printf("Last digit of %d is %d and is 0\n", n, y);


return (0);
}
