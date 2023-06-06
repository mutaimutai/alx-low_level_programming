#include "main.h"
/**
 * _memcpy-copies memory area to a destination
 * @dest:destination of the memory address
 * @src:the string to be copied
 * @n:number of bytes to be copied
 * Return:returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for ( i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
