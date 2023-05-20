#include <stdio.h>
/**
 * main - Entry point
 * Return:0 when it is successfull
 */

int main(void)
{
	int c = 0;
	char ch = 'a';

	for (; c <= 9; c++)
	{
	putchar(c + '0');
	}
	for (; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
