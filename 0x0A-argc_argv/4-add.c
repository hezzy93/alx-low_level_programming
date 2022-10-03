#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main -this is a fuction that sum positve numbers
 * @argc: argc parameter
 * @argv: an array of a command listed
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int a = 0, i, j;

	for (i = 1; 1 < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				puts("Error");
				return (1);
			}
		}
		a += atoi(argv[i]);
	}
	printf("%d\n", a);
	return (0);
}
