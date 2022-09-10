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
char letter;

for (letter = 'a'; letter <= 'z' ; letter++)
	
putchar(letter);

for (letter = 'A'; letter <= 'Z' ; letter++)
	
putchar('\n');
return (0);
}
