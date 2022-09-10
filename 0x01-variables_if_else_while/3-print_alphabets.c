#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program that prints the alphabet in lowercase
 * and then in uppercase, followed by a new line
 *
 * Return: 0
 */
 
int main(void)
{
	char alphabet;

for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
	
	putchar(alphabet);

for (alphabet = 'A'; alphabet <= 'Z' ; alphabet++)
	
	putchar('\n');
return (0);
}
