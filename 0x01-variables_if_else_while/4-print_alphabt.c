#include <stdio.h>
/**
 * main - entry point
 *
 * Description:a program that prints the alphabet in lowercase
 *
 * followed by a new line
 *
 * Print all the letters except q and e
 *
 * Return:0
 */
int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
if (alphabet != 'e' && alphabet != 'q')
putchar(alphabet);
putchar('\n');
return (0);
}
