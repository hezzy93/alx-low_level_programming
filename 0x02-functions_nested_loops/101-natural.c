#include <stdio.h>
#include "main.h"
/**
 * main - Prints the sum of all multiples of 3 or 5 up to 1024
 * @n: is intiger variable for print times table
 * Return: Always 0.
 */
int main(void)

{
int i, n, m, sum;
sum = 0;
for (i = 0; i < 1024; i++)
{
n = i % 3;
m = i % 5;
if (n == 0 || m == 0)
sum = sum + i;
}
printf("%d\n", sum);
return (0);
}
