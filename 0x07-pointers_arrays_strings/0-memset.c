#include "main.h"
/**
 * _memset-is a function that fills memory with a constant byte
 * @s:characetr pointer
 * @b:the constant byte
 * n:number of bytes in s to occupy
 * Return:the pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
