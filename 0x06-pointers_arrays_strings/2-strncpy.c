#include "main.h"
/**
 * _strncy - C function that copies a string, including the
 * terminating null byte, using at most an inputed number of bytes.
 * if the lenth of the source string is less than the maximum byte number,
 * thr remainder of the destination string is filled with null bytes.
 * works identically to the standard library function 'strncy'.
 * @dest: buffer storing the string copy
 * @src: max number of byte copied
 * @n: max number of byte copied
 * Return: returns
 */

char *_strncpy(char *dest, char *src, int n);
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
