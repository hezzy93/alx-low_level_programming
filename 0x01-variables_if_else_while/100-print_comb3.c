#include <stdio.h>
/**
 *  main - print digit combination
 *
 *  Description: print two digit combination
 *
 *  Return: Always 0 (success)
 */
int main(void)
{
int c;
int d =0;
while (d < 10)
{
c = 0;
while (c < 100)
{
if ((d) ! = c && d < c)
{
putchar('0' + d);
putchar('0' + c);
if ((c + d) ! =17)
{
putchar(',');
putchar(' ');
}
}
c++;
}
d++;
}
putchar('\n');
return (0);
}

